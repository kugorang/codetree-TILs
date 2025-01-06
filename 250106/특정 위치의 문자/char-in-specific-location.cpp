#include <iostream>
using namespace std;

int main() {
    char arr[] = { 'L', 'E', 'B', 'R', 'O', 'S' };

    char findChar;
    cin >> findChar;

    for (int i = 0; i < 6; ++i)
    {
        if (arr[i] == findChar)
        {
            cout << i;
            return 0;
        }
    }

    cout << "None";

    return 0;
}