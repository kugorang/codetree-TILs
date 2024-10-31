#include <iostream>
using namespace std;

int main() {
    int countOf2 = 0;
    int sumOf2 = 0;

    for (int i = 0; i < 10; ++i)
    {
        int inputNum;
        cin >> inputNum;

        if (inputNum == 0)
            break;

        if (inputNum % 2 == 0)
        {
            ++countOf2;
            sumOf2 += inputNum;
        }
    }

    cout << countOf2 << ' ' << sumOf2;

    return 0;
}