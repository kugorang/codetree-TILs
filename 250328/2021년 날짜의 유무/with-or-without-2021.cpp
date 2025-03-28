#include <iostream>

using namespace std;

bool IsValidDate(int m, int n)
{
    switch (m)
    {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            if (n >= 1 && n <= 31)
                return true;
        case 4: case 6: case 9: case 11:
            if (n >= 1 && n <= 30)
                return true;
            break;
        case 2:
            if (n >= 1 && n <= 28)
                return true;
    }

    return false;
}

int main() {
    int M, D;

    cin >> M >> D;

    if (IsValidDate(M, D))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}