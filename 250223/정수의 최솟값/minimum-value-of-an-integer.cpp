#include <iostream>

using namespace std;

int GetMinimumValue(int a, int b, int c);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << GetMinimumValue(a, b, c);

    return 0;
}

int GetMinimumValue(int a, int b, int c)
{
    int minValue = a > b ? b : a;

    return (minValue > c ? c : minValue);
}