#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char input;
    string output;

    cin >> input;

    switch (input)
    {
        case 'S':
            output = "Superior";
            break;
        case 'A':
            output = "Excellent";
            break;
        case 'B':
            output = "Good";
            break;
        case 'C':
            output = "Usually";
            break;
        case 'D':
            output = "Effort";
            break;
        default:
            output = "Failure";
    }

    cout << output;

    return 0;
}