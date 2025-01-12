#include <iostream>
using namespace std;

int main() {
    int num[1000];
    bool appeared[1000] = { false, };

    int N;
    cin >> N;

    for (int i = 0; i < N; ++i)
    {
        cin >> num[i];
        
        if (appeared[num[i]])
        {
            for (int j = 0; j < N; ++j)
            {
                if (num[j] == num[i])
                {
                    num[j] = 0;   
                    num[i] = 0;
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