#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int attendanceNumber;
    string output;

    do
    {
        cin >> attendanceNumber;

        switch (attendanceNumber)
        {
            case 1:
                output = "John";
                break;
            case 2:
                output = "Tom";
                break;
            case 3:
                output = "Paul";
                break;
            case 4:
                output = "Sam";
                break;
            default:
                output = "Vacancy";
                break;
        }

        cout << output << endl;
    } while (attendanceNumber <= 4);

    return 0;
}