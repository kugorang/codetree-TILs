#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int year, month, day;
    char dot;

    cin >> year >> dot >> month >> dot >> day;

    dot = '-';

    cout << month << dot << day << dot << year;

    return 0;
}