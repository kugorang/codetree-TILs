#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int numOfDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int answer = 0;

    while (m1 != m2 || d1 != d2)
    {
        ++d1;

        if (d1 > numOfDays[m1])
        {
            ++m1;
            d1 = 1;
        }
        
        ++answer;
    }

    cout << answer + 1;

    return 0;
}