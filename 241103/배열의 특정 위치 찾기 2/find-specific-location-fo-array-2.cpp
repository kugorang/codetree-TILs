#include <iostream>
using namespace std;

int main() {
    int oddSum = 0;
    int evenSum = 0;

    for (int i = 0; i < 10; ++i)
    {
        int inputNum;

        cin >> inputNum;

        if (inputNum % 2)
            oddSum += inputNum;
        else
            evenSum += inputNum;
    }

    cout << (oddSum >= evenSum) ? (oddSum - evenSum) : (evenSum - oddSum);

    return 0;
}