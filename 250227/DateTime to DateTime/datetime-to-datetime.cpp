#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;

    cin >> a >> b >> c;

    int a2 = 11, b2 = 11, c2 = 11;

    if (a < a2)
        return -1;
    
    if (b < b2)
        return -1;
    
    if (c < c2)
        return -1;
        
    cout << (a * 24 * 60 + b * 60 + c) - (a2 * 24 * 60 + b2 * 60 + c2);

    return 0;
}