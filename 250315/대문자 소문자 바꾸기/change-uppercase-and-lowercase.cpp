#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (auto &ch : str)
    {
        if (isupper(ch))
            ch = tolower(ch);
        else if (islower(ch))
            ch = toupper(ch);
    }

    cout << str;

    return 0;
}