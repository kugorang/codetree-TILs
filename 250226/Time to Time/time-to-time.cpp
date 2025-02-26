#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int answer = 0;
    
    while (!(a == c && b == d))
    {
        ++b;
        ++answer;

        if (b == 60)
        {
            ++a;
            b = 0;
        }
    }

    cout << answer;

    return 0;
}