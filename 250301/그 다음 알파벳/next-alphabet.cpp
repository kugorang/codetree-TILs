#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    cout << ((ch == 'z') ? 'a' : (char)(ch + 1));

    return 0;
}