#include <iostream>
#include <string>

using namespace std;

int FindSubstr(string text, string pattern)
{
    auto result = text.find(pattern);

    if (result == string::npos)
        return -1;
    
    return result;
}

int main() {
    string text;
    string pattern;

    cin >> text;
    cin >> pattern;

    cout << FindSubstr(text, pattern);

    return 0;
}