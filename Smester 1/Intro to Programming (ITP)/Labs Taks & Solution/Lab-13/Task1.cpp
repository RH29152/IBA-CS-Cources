#include <iostream>
#include <fstream>
#include <set>
#include <string>
using namespace std;
int main() {
  
    ifstream ifs("words.txt"); // assuming input.txt is in the current directory
    std::set<std::string> dictionary;
    std::string word;
    while (std::getline(ifs, word)) {
        dictionary.insert(word);
    }
    
    ifstream ifss("words1.txt"); // assuming input.txt is in the current directory
    std::set<std::string> dictionary1;
    std::string word1;
    while (std::getline(ifss, word1)) 
    {
        dictionary1.insert(word1);
    }

   
    std::string userInput;
    std::cout << "Enter a string for spell checking:" << std::endl;
    while (std::cin >> userInput) {
        if (dictionary.find(userInput) == dictionary.end() && dictionary1.find(userInput) == dictionary1.end()) 
	{
            std::cout << "Misspelled word: " << userInput << std::endl;
        }
    }

    return 0;
}