#include <iostream>

using namespace std;

void CalculateAandB(int &a, int &b)
{
    if (a > b)
    {
        b += 10;
        a <<= 1;
    }
    else
    {
        a += 10;
        b <<= 1;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    
    CalculateAandB(a, b);

    cout << a << ' ' << b;

    return 0;
}