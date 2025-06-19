#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int prevNum;
    cin >> prevNum;

    int answer = 1;

    for (int i = 1; i < N; i++)
    {
        int currNum;
        cin >> currNum;

        if (prevNum > currNum)
        {
            answer = 1;
            continue;
        }

        ++answer;
        prevNum = currNum;
    }

    cout << answer;

    return 0;
}