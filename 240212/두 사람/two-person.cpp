#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int firstPersonAge, secondPersonAge;
    char firstPersonGender, secondPersonGender;

    cin >> firstPersonAge >> firstPersonGender;
    cin >> secondPersonAge >> secondPersonGender;

    if (firstPersonAge >= 19 && firstPersonGender == 'M')
    {
        cout << 1;
        return 0;
    }

    if (secondPersonAge >= 19 && secondPersonGender == 'M')
    {
        cout << 1;
        return 0;
    }

    cout << 0;

    return 0;
}