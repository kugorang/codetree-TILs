#include <iostream>
using namespace std;

int main() {
    int a, b;

    cin >> a >> b;

    for (int row = 1; row <= 9; ++row)
    {
        int currentNum = b;
        
        while (currentNum >= a)
        {
            cout << currentNum << " * " << row << " = " << currentNum * row;
            currentNum -= 2;

            if (currentNum >= a)
                cout << " / ";
        }
        cout << endl;
    }
    return 0;
}