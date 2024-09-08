#include <iostream>

using namespace std;

int main() 
{
    int n;

    cin >> n;

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row > col)
            {
                cout << "  ";
                continue;
            }

            if (row == 1 || col % 2 == 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    return 0;
}