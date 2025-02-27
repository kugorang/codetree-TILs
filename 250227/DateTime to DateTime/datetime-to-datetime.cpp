#include <iostream>

using namespace std;

int main() 
{
    int a, b, c;

    cin >> a >> b >> c;

    int a2 = 11, b2 = 11, c2 = 11;

    if (a < a2)
        cout << -1;
    else if (a == a2 && b < b2)
        cout << -1;
    else if (a == a2 && b == b2 && c < c2)
        cout << -1;
    else        
        cout << (a * 24 * 60 + b * 60 + c) - (a2 * 24 * 60 + b2 * 60 + c2);

    return 0;
}