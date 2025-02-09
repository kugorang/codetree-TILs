#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    char firstCh = str[0];
    str.erase(0, 1);
    str.push_back(firstCh);

    cout << str;

    return 0;
}