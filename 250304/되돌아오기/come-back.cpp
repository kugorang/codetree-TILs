#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> um = {
        { 'E', 0 },
        { 'S', 1 },
        { 'W', 2 },
        { 'N', 3 }
    };

    int dx[] = { 1, 0, -1, 0 };
    int dy[] = { 0, -1, 0, 1 };

    int N;
    cin >> N;

    int x = 0, y = 0;
    int count = 0;

    for (int i = 0; i < N; ++i)
    {
        char dir;
        int dist;

        cin >> dir >> dist;
        
        for (int j = 0; j < dist; ++j)
        {
            x += dx[um[dir]];
            y += dy[um[dir]];
            ++count;

            if (x == 0 && y == 0)
                break;
        }

        if (x == 0 && y == 0)
            break;
    }

    cout << (count == N ? -1 : count);

    return 0;
}