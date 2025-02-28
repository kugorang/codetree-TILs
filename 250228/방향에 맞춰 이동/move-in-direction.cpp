#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int dx[4] = { 1, 0, -1, 0 };
    int dy[4] = { 0, -1, 0, 1 };

    unordered_map<char, int> um;

    um.insert(make_pair('E', 0));
    um.insert(make_pair('S', 1));
    um.insert(make_pair('W', 2));
    um.insert(make_pair('N', 3));

    int currX = 0, currY = 0;

    for (int i = 0; i < n; i++) 
    {
        char dir;
        int dist;

        cin >> dir >> dist;

        currX += (dx[um[dir]] * dist);
        currY += (dy[um[dir]] * dist);
    }

    cout << currX << ' ' << currY;

    return 0;
}