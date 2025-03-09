#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;
    
    for (int i = 1; i <= N; ++i)
    {
        if (abs(i - a) <= 2)
        {
            count += N * N;
            continue;
        }

        for (int j = 1; j <= N; ++j)
        {
            if (abs(j - b) <= 2)
            {
                count += N;
                continue;
            }
            
            for (int k = 1; k <= N; ++k)
                if (abs(k - c) <= 2)
                    ++count;
        }
    }

    cout << count;

    return 0;
}