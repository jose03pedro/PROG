#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void show_vector(const vector<pair<string, size_t>>& count) {
    cout << "[ ";
    for (const auto& e : count) {
        cout << e.first << ":" << e.second << ' ';
    }
    cout << "]\n";
}

void count_words(const string& str, vector<pair<string, size_t>>& count) {
    string word;
    for (const auto& c : str) {
        if (c == ' ') {
            if (word.size() > 0) {
                bool found = false;
                for (auto& e : count) {
                    if (e.first == word) {
                        ++e.second;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    count.push_back({word, 1});
                }
                word.clear();
            }
        } else {
            word += tolower(c);
        }
    }
    if (word.size() > 0) {
        bool found = false;
        for (auto& e : count) {
            if (e.first == word) {
                ++e.second;
                found = true;
                break;
            }
        }
        if (!found) {
            count.push_back({word, 1});
        }
    }

    sort(count.begin(), count.end(),
         [](const pair<string, size_t>& a, const pair<string, size_t>& b) {
             return a.first < b.first;
         });
}