#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int width, height;
    char inputChar;

    do
    {
        cin >> width >> height >> inputChar;

        cout << width * height << endl;
    } while (inputChar != 'C');

    return 0;
}