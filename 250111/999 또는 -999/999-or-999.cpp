#include <iostream>
#include <climits>
using namespace std;

int main() {
    int min = INT_MAX, max = INT_MIN;

    while (true)
    {
        int inputNum;
        cin >> inputNum;

        if (inputNum == 999 || inputNum == -999)
            break;
        
        if (inputNum < min)
            min = inputNum;
        if (inputNum > max)
            max = inputNum;
    }

    cout << max << ' ' << min;

    return 0;
}