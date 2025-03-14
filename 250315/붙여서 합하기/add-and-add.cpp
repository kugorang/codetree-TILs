#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    cout << stoi(A + B) + stoi(B + A);

    return 0;
}