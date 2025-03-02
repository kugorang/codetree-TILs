#include <iostream>
using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int daysOfMonths[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string dayOfWeek1[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    string dayOfWeek2[] = {"Mon", "Sun", "Sat", "Fri", "Thu", "Wed", "Tue"};

    int count1 = d1;
    
    for (int i = 1; i < m1; ++i)
        count1 += daysOfMonths[i];

    int count2 = d2;

    for (int i = 1; i < m2; ++i)
        count2 += daysOfMonths[i];

    if (count2 > count1)
        cout << dayOfWeek1[(count2 - count1) % 7];
    else
        cout << dayOfWeek2[(count1 - count2) % 7];

    return 0;
}