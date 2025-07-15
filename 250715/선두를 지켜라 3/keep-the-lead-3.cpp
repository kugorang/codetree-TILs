#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    unsigned long long A[1001];
    A[0] = 0;
    int AIndex = 1;
    int totalTime = 0;

    for (int i = 0; i < N; ++i)
    {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; ++j)
        {
            A[AIndex] = A[AIndex - 1] + v;
            ++AIndex;
        }

        totalTime += t;
    }

    unsigned long long B[1001];
    B[0] = 0;
    int BIndex = 1;

    for (int i = 0; i < M; ++i)
    {
        int v, t;
        cin >> v >> t;

        for (int j = 0; j < t; ++j)
        {
            B[BIndex] = B[BIndex - 1] + v;
            ++BIndex;
        }
    }

    int whichIsFirst = 0;
    int result = 0;

    for (int i = 1; i <= totalTime; ++i)
    {
        if (A[i] < B[i] && whichIsFirst != -1)
        {
            whichIsFirst = -1;
            ++result;
        }
        else if (A[i] > B[i] && whichIsFirst != 1)
        {
            whichIsFirst = 1;
            ++result;
        }
        else if (A[i] == B[i] && whichIsFirst != 0)
        {
            whichIsFirst = 0;
            ++result;
        }
    }

    cout << result;

    return 0;
}