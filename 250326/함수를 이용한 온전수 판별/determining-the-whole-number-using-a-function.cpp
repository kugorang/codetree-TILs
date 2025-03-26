#include <iostream>

using namespace std;

bool isPerfectNumber(int num)
{
    return (!(num % 2 == 0 || num % 10 == 5 || (num % 3 == 0 && num % 9 != 0)));
}

int main()
{
    int a, b;
    cin >> a >> b;

    int answer = 0;

    for (int i = a; i <= b; ++i)
        if (isPerfectNumber(i))
            ++answer;
    
    cout << answer;

    return 0;
}