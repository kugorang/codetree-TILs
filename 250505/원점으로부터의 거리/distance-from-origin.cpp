#include <iostream>
#include <algorithm>

using namespace std;

class Point
{
private:
    int n, x, y;

public:
    Point() {}

    Point(int n, int x, int y)
    {
        this->n = n;
        this->x = x;
        this->y = y;
    }

    int GetNo()
    {
        return n;
    }

    int GetManhattanDistance()
    {
        return abs(x) + abs(y);
    }
};

bool ComparePoint(Point point1, Point point2)
{
    int point1Distance = point1.GetManhattanDistance();
    int point2Distance = point2.GetManhattanDistance();

    if (point1Distance != point2Distance)
        return point1Distance < point2Distance;
    
    return point1.GetNo() < point2.GetNo();

}

int main()
{
    int N;
    cin >> N;

    Point point[N];

    for (int i = 0; i < N; ++i)
    {
        int x, y;
        cin >> x >> y;

        point[i] = Point(i + 1, x, y);
    }
    
    sort(point, point + N, ComparePoint);

    for (int i = 0; i < N; ++i)
        cout << point[i].GetNo() << endl;

    return 0;
}
