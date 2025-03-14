#include <iostream>
using namespace std;

int main() {
    string A;
    cin >> A;

    int sum = 0;

    for (auto &ch : A)
        if (isdigit(ch))
            sum += ch - '0';
    
    cout << sum;

    return 0;
}