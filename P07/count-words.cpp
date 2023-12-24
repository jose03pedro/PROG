#include <cctype>
#include <fstream>
#include <string>

using namespace std;

int count(const string& fname, const string& word) {
    ifstream infile(fname);
    if (!infile) {
        return -1;
    }
    std::string wordAux = word;

    int count = 0;
    string s;
    while (infile >> s) {
        for (char& c : s) c = tolower(c);
        for (char& c : wordAux) c = tolower(c);

        if (s == wordAux) {
            count++;
        }
    }

    infile.close();
    return count;
}
