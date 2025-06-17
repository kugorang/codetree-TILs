#include <iostream>

using namespace std;

int main() {
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

        if (currNum == prevNum)
        {
            ++currCount;
            continue;
        }
        
        prevNum = currNum;

        if (currCount > answer)
            answer = currCount;

        currCount = 1;
    }
    
    cout << answer;

    return 0;
}