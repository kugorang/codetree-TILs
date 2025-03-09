#include <iostream>
#include <climits>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int x[100], y[100];

    for (int i = 0; i < N; ++i)
        cin >> x[i] >> y[i];

    int target = 0;
    int minArea = INT_MAX;
    
    for (int i = 0; i < N; ++i)
    {
        int minX = 40001, maxX = 0;
        int minY = 40001, maxY = 0;

        for (int j = 0; j < N; ++j)
        {
            if (j == target)
                continue;

            minX = min(minX, x[j]);
            maxX = max(maxX, x[j]);
            minY = min(minY, y[j]);
            maxY = max(maxY, y[j]);
        }

        minArea = min(minArea, (maxX - minX) * (maxY - minY));

        ++target;
    }

    cout << minArea;

    return 0;
}