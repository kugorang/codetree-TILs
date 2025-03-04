#include <iostream>
#include <string>

using namespace std;

int main() {
    string commands;
    cin >> commands;

    int commandsLength = commands.length();

    int dx[] = { 1, 0, -1, 0 };
    int dy[] = { 0, -1, 0, 1 };

    int x = 0, y = 0, direction = 3, count = 0;

    for (int i = 0; i < commandsLength; ++i)
    {
        switch (commands[i])
        {
            case 'L':
                direction = (direction + 1) % 4;
                break;
            case 'R':
                direction = (direction + 3) % 4;
                break;
            case 'F':
                x += dx[direction];
                y += dy[direction];
                break;
        }

        ++count;

        if (x == 0 && y == 0)
            break;
    }

    cout << (x == 0 && y == 0 ? count : -1);

    return 0;
}