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
        { 'L', 3 },
        { 'U', 2 }
    };

    int dx[] = { 1, 0, 0, -1 };
    int dy[] = { 0, -1, 1, 0 };

    for (int i = 0; i < t; ++i)
    {
        if (InRange(c + dx[um[d]], r + dy[um[d]]))
        {
            c += dx[um[d]];
            r += dy[um[d]];
        }
        else
            d = 3 - d;
    }

    cout << r << ' ' << c;

    return 0;
}