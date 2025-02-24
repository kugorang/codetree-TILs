#include <iostream>
using namespace std;

int main() {
    char ch1, ch2;

    cin >> ch1 >> ch2;

    cout << ch1 + ch2 << ' '
     << (ch1 > ch2 ? ch1 - ch2 : ch2 - ch1);

    return 0;
}