#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "wc.h"

using namespace std;

wcresult wc(const string& filename) {
    wcresult result = {0, 0, 0};
    ifstream input(filename);
    if (!input) {
          return result;
    }
    string line;
    while (getline(input, line)) {
        result.lines++;
        istringstream iss(line);
        string word;
        while (iss >> word) {
            result.words++;
            result.bytes += word.length();
        }
        result.bytes += line.length(); 
        result.bytes++; 
    }
    input.close();
    return result;
}
