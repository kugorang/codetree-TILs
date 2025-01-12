#include <iostream>
using namespace std;

int main() {
    int num[1000];
    int appeared[1000] = { 0, };

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> num[i];
        
        ++appeared[num[i]];

        if (appeared[num[i]] > 1)
            num[i] = -1;
        else if (appeared[num[i]] == 1)
        {
            for (int j = 0; j < i; ++j)
            {
                if (num[j] == num[i])
                {
                    num[j] = -1;
                    num[i] = -1;
                    break;
                }
            }
        }
    }

    int max = -1;

    for (int i = 0; i < N; ++i)
        if (num[i] > max)
            max = num[i];

    cout << max;

    return 0;
}