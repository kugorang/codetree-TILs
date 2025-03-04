#include <iostream>
#include <unordered_map>

using namespace std;

int n;

bool InRange(int x, int y)
{
    return (x > 0 && x <= n && y > 0 && y <= n);
}

int main() {
    int t;
    cin >> n >> t;
    
    int r, c;
    char d;
    cin >> r >> c >> d;
    
    unordered_map<char, int> um = {
        { 'R', 0 },
        { 'D', 1 },
        { 'U', 2 },
        { 'L', 3 }
    };

    int dx[] = { 1, 0, 0, -1 };
    int dy[] = { 0, -1, 1, 0 };
    int direction = um[d];

    for (int i = 0; i < t; ++i)
    {
        if (InRange(c + dx[direction], r + dy[direction]))
        {
            c += dx[direction];
            r += dy[direction];
        }
        else
            direction = 3 - direction;
    }

    cout << r << ' ' << c;

    return 0;
}