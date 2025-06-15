#include <iostream>

using namespace std;

int main() {
    string day[] = { "Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun" };
    int month[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    
    string A;
    cin >> A;

    int answer = 0;
    int loopCount = 0;

    while (m1 < m2 || d1 <= d2)
    {
        if (day[loopCount++ % 7] == A)
            ++answer;

        if (++d1 > month[m1])
        {
            d1 = 1;
            ++m1;
        }
    }

    cout << answer;

    return 0;
}