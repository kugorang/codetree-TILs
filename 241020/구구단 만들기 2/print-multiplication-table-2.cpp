#include <iostream>
using namespace std;

void PrintMulitplyResult(int startNum, int endNum, int mulitplyNum);

int main() {
    int a, b;

    cin >> a >> b;

    for (int i = 2; i <= 8; i += 2)
    {
        PrintMulitplyResult(b, a, i);
        cout << endl;
    }

    return 0;
}

void PrintMulitplyResult(int startNum, int endNum, int mulitplyNum)
{
    for (int i = startNum; i >= endNum; --i)
    {
        cout << i << " * " << mulitplyNum << " = " << i * mulitplyNum;

        if (i > endNum)
            cout << " / ";
    }
}