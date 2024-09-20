#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <map>
using std::cout, std::endl, std::ifstream, std::string, std::set, std::cin, std::endl, std::map, std::pair;

string password_checker(string line, set<string>& dictionary) {
    if (line.length() < 8) {
        return "Bad Password";
    }

    if (dictionary.find(line) != dictionary.end()) {
        return "Bad Password";
    }

    if (isdigit(line[line.length() - 1]) && dictionary.find(line.substr(0, line.length() - 1) ) != dictionary.end()) {
        return "Bad Password";
    }

    for (int i = 1; i < line.length() - 1; i++) {
        if (isalpha(line[i - 1]) && isdigit(line[i]) && isalpha(line[i + 1])) {
            return "Bad Password";
        }
    }

    return "Good Password";
}

int main() {
    ifstream ifs(R"(words.txt)");
    ifstream ifs2(R"(words1.txt)");

    string line;
    set<string> dictionary;

    while(getline(ifs, line)) {
        dictionary.insert(line);
    }
    while(getline(ifs2, line)) {
        dictionary.insert(line);
    }

    while(getline(cin, line)) {
        cout << password_checker(line, dictionary) << endl;
    }

    return 0;
}
