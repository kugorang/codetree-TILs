#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int gender, age;
    string output;

    cin >> gender;
    cin >> age;

    if (age >= 19)
    {
        output = gender == 0 ? "MAN" : "WOMAN";
    }
    else
    {
        output = gender == 0 ? "BOY" : "GIRL";
    }

    cout << output;

    return 0;
}