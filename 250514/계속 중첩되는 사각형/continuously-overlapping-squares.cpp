#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool arr[201][201] = { false, };

    for (int i = 0; i < n; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;

        for (int row = y1; row < y2; ++row)
        {
            for (int col = x1; col < x2; ++col)
            {
                if (i % 2 == 0)
                    arr[row][col] = false;   // RED
                else
                    arr[row][col] = true;   // BLUE
            }
        }
    }

    int answer = 0;

    for (int row = 0; row < 201; ++row)
    {
        for (int col = 0; col < 201; ++col)
        {
            if (arr[row][col])
                ++answer;
        }
    }

    cout << answer;

    return 0;
}