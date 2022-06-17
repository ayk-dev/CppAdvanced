#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string s, char sep) {
    vector<string> strings;

    ostringstream ss;

    for (char ch : s) {
        if (ch == sep) {
            strings.push_back(ss.str());
            ss.str("");
            ss.clear();
        }
        else {
            ss << ch;
        }
    }
    strings.push_back(ss.str());
    return strings;
}

int main()
{
    vector<string>(*p) (string, char);
    p = &split;
    p("hello world", ' ');

    
    return 0;
}

