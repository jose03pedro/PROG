#include <string>
#include <vector>

using namespace std;

string longest_prefix(const vector<string>& v) {
    if (v.empty()) {
        return "";
    }
    string prefix = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        size_t j = 0;
        while (j < prefix.size() && j < v[i].size() && prefix[j] == v[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j);
    }
    return prefix;
}
