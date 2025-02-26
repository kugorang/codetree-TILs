#include <iostream>

using namespace std;

int main() {
    int x1[10], y1[10];
    int x2[10], y2[10];
    int arr[201][201] = { 0, };

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> x1[i] >> y1[i] >> x2[i] >> y2[i];

        x1[i] += 100;
        x2[i] += 100;
        y1[i] += 100;
        y2[i] += 100;

        for (int j = x1[i]; j < x2[i]; ++j)
            for (int k = y1[i]; k < y2[i]; ++k)
                ++arr[k][j];
    }

    int count = 0;

    for (int row = 0; row < 201; ++row)
        for (int col = 0; col < 201; ++col)
            if (arr[row][col] > 0)
                ++count;
    
    cout << count;

    return 0;
}