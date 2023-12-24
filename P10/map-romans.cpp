#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<pair<char, unsigned>> roman_to_int = {{'I', 1},   {'V', 5},   {'X', 10},
                                             {'L', 50},  {'C', 100}, {'D', 500},
                                             {'M', 1000}};
/*
unsigned roman_to_arab(const string& roman) {
    unsigned res = 0;
    // for (auto it = roman.begin(); it != roman.end(); ++it) {
    for (auto it : roman) {
        unsigned tmp = 0;
        for (const auto& p : roman_to_int) {
            if (p.first == it) {
                if (p.second >= tmp)
                    res += p.second;
                else
                    res -= tmp;
                tmp = p.second;
            }
        }
    }
    return res;
}
*/

unsigned roman_to_arab(const string& roman) {
    auto vecSize = roman_to_int.size();
    for (auto s : roman) {
    }
}

int main() {
    string r = "CMLXIV";  // 964
    cout << roman_to_arab(r) << '\n';
    return 0;
}