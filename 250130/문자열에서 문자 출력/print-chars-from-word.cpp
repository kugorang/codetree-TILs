#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (auto ch : str)
        cout << ch << endl;

    return 0;
}