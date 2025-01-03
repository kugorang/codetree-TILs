#include <iostream>
using namespace std;

#define ARR_MAX 10

int main() {
    int count[ARR_MAX] = { 0, };
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int inputNum;
        cin >> inputNum;

        ++count[inputNum];
    }

    for (int i = 1; i < ARR_MAX; ++i)
        cout << count[i] << endl;

    return 0;
}