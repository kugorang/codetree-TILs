#include <iostream>

using namespace std;

int GetSumOfNum(int N)
{
    int sum = 0;

    for (int i = 1; i <= N; ++i)
        sum += i;
    
    return sum / 10;
}

int main() {
    int N;
    cin >> N;
    
    cout << GetSumOfNum(N);

    return 0;
}