#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int arr[100];

    for (int i = 0; i < N; ++i)
        cin >> arr[i];

    int count = 0;

    for (int i = 0; i < N - 2; ++i)
    {
        for (int j = i + 1; j < N - 1; ++j)
        {
            for (int k = j + 1; k < N; ++k)
            {
                if (arr[i] <= arr[j] && arr[j] <= arr[k])
                    ++count;
            }
        }
    }

    cout << count;
    
    return 0;
}