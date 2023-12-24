#include <algorithm>
#include <cctype>
#include <string>

bool pangram(const std::string& s, std::string& m) {
    bool letters[26] = {false};
    int count = 0;
    for (char c : s) {
        if (std::isalpha(c)) {
            int index = std::toupper(c) - 'A';
            if (!letters[index]) {
                letters[index] = true;
                count++;
            }
        }
    }
    if (count == 26) {
        m = "";
        return true;
    } else {
        m = "";
        for (int i = 0; i < 26; i++) {
            if (!letters[i]) {
                m += (char)('a' + i);
            }
        }
        return false;
    }
}
