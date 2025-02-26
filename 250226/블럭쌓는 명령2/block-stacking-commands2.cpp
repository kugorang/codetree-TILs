#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int A[100] = { 0, }, B[100] = { 0, };
    int arr[100] = { 0, };
    
    int N, K;
    cin >> N >> K;

    for (int i = 0; i < K; i++)
        cin >> A[i] >> B[i];

    for (int i = 0; i < N; ++i)
        for (int j = A[i]; j <= B[i]; ++j)
            ++arr[j];

    sort(arr, arr + N);

    cout << arr[N - 1];

    return 0;
}