#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int prevNum;
    cin >> prevNum;

    int answer = 1;
    int currCount = 1;

    for (int i = 1; i < N; i++)
    {
        int currNum;
        cin >> currNum;

        if ((prevNum < 0 && currNum < 0) 
        || (prevNum > 0 && currNum > 0))
        {
            ++currCount;
            continue;
        }

        prevNum = currNum;

        if (currCount > answer)
            answer = currCount;

        currCount = 1;
    }

    if (currCount > answer)
        answer = currCount;

    cout << answer;

    return 0;
}