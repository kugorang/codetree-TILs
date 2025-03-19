#include <iostream>

using namespace std;

bool find369(int num)
{
    while (num > 0)
    {
        if (num % 10 == 3 || num % 10 == 6 || num % 10 == 9)
            return true;
        num /= 10;
    }
    return false;
}

int Calculate369(int a, int b)
{
    int count = 0;

    for (int i = a; i <= b; ++i)
        if (i % 3 == 0 || find369(i))
            ++count;
    
    return count;
}

int main() 
{
    int a, b;
    cin >> a >> b;
    
    cout << Calculate369(a, b);

    return 0;
}