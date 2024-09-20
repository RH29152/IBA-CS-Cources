#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
using std::cout, std::endl, std::ifstream, std::string, std::set, std::cin, std::endl, std::map, std::pair;

pair<string, string> correction(string line) {
    int split;

    for (int i = 0; i < line.length(); i++) 
    {
        if (line[i] == ',') {
            split = i;
        }
    }

    return {line.substr(0, split), line.substr(split + 1, line.length() - split)};
}

int main() {
    ifstream ifs(R"(misspellings.txt)");

    string line;
    map<string, string> dictionary;

    while(getline(ifs, line)) {
        dictionary.insert(correction(line));
        cout<<line<<endl;
    }

    while(getline(cin, line)) {
        
        auto a = dictionary.find(line);
        if (a == dictionary.end()) {
            cout << line << " not found! " << endl;
        } else {
            cout << line << " -> " << dictionary[line]<<endl;
        }
        
    }


    return 0;
}
