#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    int numOfDays[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int answer1 = 0, answer2 = 0;

    for (int i = 1; i < m1; ++i)
        answer1 += numOfDays[i];
    
    answer1 += d1;
    
    for (int i = 1; i < m2; ++i)
        answer2 += numOfDays[i];

    answer2 += d2;

    cout << answer2 - answer1 + 1;

    return 0;
}