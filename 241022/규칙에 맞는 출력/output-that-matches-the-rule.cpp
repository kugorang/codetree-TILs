#include <iostream>
using namespace std;

int main() {
    int N;

    cin >> N;

    for (int i = N; i >= 1; --i)
    {
        for (int j = i; j <= N; ++j)
            cout << j << ' ';

        cout << endl;
    }

    return 0;
}