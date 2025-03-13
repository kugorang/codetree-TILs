#include <iostream>
using namespace std;

int main() {
    char alphabet;
    cin >> alphabet;

    cout << (alphabet == 'a' ? 'z' : (char)(alphabet - 1));

    return 0;
}