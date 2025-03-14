#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;

string genEngWord() {
    vector<string> words;
    ifstream file;
    file.open("C:/SoftwareEngineering/Project/KeyboardTrainer/src/generator/WordsENG/words.txt");
    string line;
    while (getline(file, line)) {
        if (!line.empty()) {
            words.push_back(line);
        }
    }
    file.close();
    return words[rand() % words.size()];
}