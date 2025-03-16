#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string A;

    cin >> n >> A;

    int answer = 0;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        if (str.compare(A) == 0)
            ++answer;
    }

    cout << answer;

    return 0;
}