#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    char arr[101] = { 0, };

    for (int i = 0; i < N; ++i)
    {
        int index;
        char alphabet;

        cin >> index >> alphabet;

        arr[index] = alphabet;
    }

    int maxDistance = 0;

    for (int i = 0; i < 100; ++i)
    {
        char targetChar = arr[i];

        if (targetChar != 'G' && targetChar != 'H')
            continue;
        
        int gCount = 0;
        int hCount = 0;
        int lastIndex = -1;

        for (int j = i; j < 101; ++j)
        {
            if (arr[j] == 'G')
            {
                ++gCount;
                lastIndex = j;
            }
            else if (arr[j] == 'H')
            {
                ++hCount;
                lastIndex = j;
            }
        }
    
        if (gCount == 0 || hCount == 0 || gCount == hCount)
            if (lastIndex - i > maxDistance)
                maxDistance = lastIndex - i + 1;
    }

    cout << maxDistance;

    return 0;
}