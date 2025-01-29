#include <iostream>
using namespace std;

int main() {
    string arr[10];
    int arrLen[10];

    for (int i = 0; i < 10; ++i)
    {
        cin >> arr[i];
        arrLen[i] = arr[i].length();
    }

    char ch;
    cin >> ch;
    bool isFound = false;

    for (int i = 0; i < 10; ++i)
        if (arr[i][arrLen[i] - 1] == ch)
        {
            cout << arr[i] << endl;
            isFound = true;
        }
            
    if (!isFound)
        cout << "None";

    return 0;
}