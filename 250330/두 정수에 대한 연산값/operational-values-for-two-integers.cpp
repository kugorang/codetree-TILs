#include <iostream>

using namespace std;

void CompareNum(int &a, int &b)
{
    if (a > b)
    {
        a += 25;
        b <<= 1;
    }
    else
    {
        b += 25;
        a <<= 1;
    }
}

int main() {
    int a, b;

    cin >> a >> b;
    
    CompareNum(a, b);

    cout << a << ' ' << b;

    return 0;
}