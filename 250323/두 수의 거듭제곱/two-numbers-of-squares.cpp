#include <iostream>

using namespace std;

int GetSquareValue(int a, int b)
{
    int answer = 1;

    for (int i = 0; i < b; ++i)
        answer *= a;
    
    return answer;
}

int main()
{
    int a, b;

    cin >> a >> b;
    
    cout << GetSquareValue(a, b);

    return 0;
}