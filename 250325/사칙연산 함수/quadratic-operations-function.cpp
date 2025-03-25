#include <iostream>
#include <climits>

using namespace std;

int Calculate(int a, char o, int c)
{
    switch (o)
    {
        case '+':
            return a + c;
        case '-':
            return a - c;
        case '*':
            return a * c;
        case '/':
            return a / c;
        default:
            return INT_MIN;
    }
}

int main()
{
    int a, c;
    char o;

    cin >> a >> o >> c;
    
    int answer = Calculate(a, o, c);

    if (answer == INT_MIN)
        cout << "False";
    else
        cout << a << ' ' << o << ' ' << c << " = "<< answer;

    return 0;
}