#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0;

    for (int i = 0; i < 10; ++i)
    {
        int currentNum;

        cin >> currentNum;

        if (i == 2 || i == 4 || i == 9)
            sum += currentNum;
    }

    cout << sum;

    return 0;
}