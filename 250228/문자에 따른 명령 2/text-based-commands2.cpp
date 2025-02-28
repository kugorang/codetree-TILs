#include <iostream>

using namespace std;

int main() 
{
    string dirs;

    cin >> dirs;

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };

    int currentDir = 3;
    int currentX = 0, currentY = 0;

    for (auto &ch : dirs)
    {
        switch (ch)
        {
            case 'L':
                currentDir = (currentDir + 3) % 4;
                break;
            case 'R':
                currentDir = (currentDir + 1) % 4;
                break;
            case 'F':
                currentX += dx[currentDir];
                currentY += dy[currentDir];
                break;
        }
    }

    cout << currentX << ' ' << currentY;

    return 0;
}