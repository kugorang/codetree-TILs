#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, days;

    cin >> n;

    switch (n)
    {
        case 2:
            days = 28;
            break;
        case 1: case 3: case 5:
        case 7: case 8: case 10:
        case 12:
            days = 31;
            break;
        case 4: case 6:
        case 9: case 11:
            days = 30;
            break;
        default:
            days = 0;
    }

    cout << days;

    return 0;
}