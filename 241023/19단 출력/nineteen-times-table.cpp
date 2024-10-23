#include <iostream>
using namespace std;

void PrintGuGuDan(int guguNum);

int main() {
    for (int i = 1; i <= 19; ++i)
        PrintGuGuDan(i);

    return 0;
}

void PrintGuGuDan(int guguNum)
{
    for (int i = 1; i < 19; i += 2)
    {
        cout << guguNum << " * " << i << " = " << guguNum * i << " / "
            << guguNum << " * " << i + 1 << " = " << guguNum * (i + 1)
            << endl;
    }

    cout << guguNum << " * " << 19 << " = " << guguNum * 19 << endl;
}