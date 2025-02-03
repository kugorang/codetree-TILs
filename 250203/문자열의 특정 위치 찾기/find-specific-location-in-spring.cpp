#include <iostream>
using namespace std;

int main() {
    string str;
    char ch;
    cin >> str >> ch;

    int pos = str.find(ch);

    if (pos != string::npos)
        cout << pos;
    else
        cout << "No";

    return 0;
}