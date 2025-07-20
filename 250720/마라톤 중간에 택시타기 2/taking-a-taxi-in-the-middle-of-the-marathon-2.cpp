#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

struct Point
{
    int x;
    int y;
};

int GetDistance(Point p1, Point p2)
{
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

int main()
{
    int N;
    cin >> N;

    Point points[100];
    
    for (int i = 0; i < N; ++i)
        cin >> points[i].x >> points[i].y;
    
    int minDistance = INT_MAX;
    
    for (int i = 1; i <= N - 2; ++i)
    {
        int currDistance = 0;

        for (int j = 0; j <= N - 2; ++j)
        {
            if (j == i)
                continue;
            
            if (j + 1 == i)
                currDistance += GetDistance(points[j], points[j + 2]);
            else
                currDistance += GetDistance(points[j], points[j + 1]);
        }

        if (currDistance < minDistance)
            minDistance = currDistance;
    }

    cout << minDistance;

    return 0;
}