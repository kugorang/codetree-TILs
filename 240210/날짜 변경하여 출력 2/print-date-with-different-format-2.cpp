#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int year, month, day;
    char hyphen;

    cin >> month >> hyphen >> day >> hyphen >> year;

    hyphen = '.';

    cout << year << hyphen << month << hyphen << day;

    return 0;
}