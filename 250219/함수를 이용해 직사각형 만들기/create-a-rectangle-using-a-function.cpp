#include <iostream>

using namespace std;

void PrintRectangle(int height, int width);

int main()
{
    int n, m;

    cin >> n >> m;

    PrintRectangle(n, m);

    return 0;    
}

void PrintRectangle(int height, int width)
{
    for (int row = 0; row < height; ++row)
    {
        for (int col = 0; col < width; ++col)
            cout << 1;
        cout << endl;
    }
}