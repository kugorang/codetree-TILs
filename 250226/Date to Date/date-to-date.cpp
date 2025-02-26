#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int numOfDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int answer1 = 0, answer2 = 0;

    for (int i = 1; i <= m1; ++i)
        answer1 += numOfDays[i];
    
    for (int i = 1; i <= m2; ++i)
        answer2 += numOfDays[i];

    cout << answer2 + d2 - (answer1 + d1);

    return 0;
}