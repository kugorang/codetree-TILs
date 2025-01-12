#include <iostream>
using namespace std;

int main() {
    int num[1000];
    char appeared[1000] = { 0, };

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> num[i];
        ++appeared[i];
    }

    int max = -1;

    for (int i = 0; i < N; ++i)
    {
        if (appeared[i] > 1)
            continue;

        if (num[i] > max)
            max = num[i];
    }

    cout << max;

    return 0;
}