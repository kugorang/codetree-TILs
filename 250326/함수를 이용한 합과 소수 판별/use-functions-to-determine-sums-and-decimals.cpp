#include <iostream>
#include <cmath>

using namespace std;

bool isPrimeNumber(int num)
{
    int loopEnd = sqrt(num);

    for (int i = 2; i <= loopEnd; ++i)
        if (num % i == 0)
            return false;

    return true;
}

bool isSumOfDigitsEven(int num)
{
    int sum = 0;

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum % 2 == 0;
}

int main() {
    int a, b;
    cin >> a >> b;

    int answer = 0;

    for (int i = a; i <= b; ++i)
        if (isPrimeNumber(i) && isSumOfDigitsEven(i))
            ++answer;

    cout << answer;

    return 0;
}