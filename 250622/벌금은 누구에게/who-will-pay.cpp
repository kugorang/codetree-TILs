#include <iostream>

using namespace std;

int main()
{
    int N, M, K;
    cin >> N >> M >> K;

    int student[N] = { 0, };

    for (int i = 0; i < M; i++)
    {
        int studentNo;
        cin >> studentNo;

        if (++student[studentNo - 1] >= K)
        {
            cout << studentNo;
            return 0;
        }
    }
    
    cout << -1;

    return 0;
}