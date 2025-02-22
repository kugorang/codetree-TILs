#include <iostream>

using namespace std;

string IsEvenAndMultipleOf5(int n);

int main() {
    int n;
    cin >> n;

    cout << IsEvenAndMultipleOf5(n);

    return 0;
}

string IsEvenAndMultipleOf5(int n)
{
    if (n % 2 == 1)
        return "No";
    
    if ((n / 10 + n % 10) % 5 == 0)
        return "Yes";
    
    return "No";
}