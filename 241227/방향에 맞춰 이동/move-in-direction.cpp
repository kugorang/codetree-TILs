#include <iostream>
using namespace std;

int main() {
    int dx[4] = { -1, 0, 0, 1 };
    int dy[4] = { 0, -1, 1, 0 };

    int N;
    cin >> N;

    int x = 0, y = 0;

    for (int i = 0; i < N; ++i)
    {
        char dir;
        cin >> dir;

        int dir_num;

        if (dir == 'W')
            dir_num = 0;
        else if (dir == 'S')
            dir_num = 1;
        else if (dir == 'N')
            dir_num = 2;
        else // dir == 'E'
            dir_num = 3;

        int distance;
        cin >> distance;

        x += (dx[dir_num] * distance);
        y += (dy[dir_num] * distance);
    }

    cout << x << ' ' << y;

    return 0;
}