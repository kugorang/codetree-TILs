#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    int prevNum;
    cin >> prevNum;

    int currlength = 1;
    int answer = 1;

    for (int i = 1; i < N; i++)
    {
        int currNum;
        cin >> currNum;

        if (prevNum >= currNum)
        {
            answer = max(answer, currlength);
            currlength = 1;
            prevNum = currNum;
            continue;
        }

        ++currlength;
        prevNum = currNum;
    }

    cout << answer;

    return 0;
}