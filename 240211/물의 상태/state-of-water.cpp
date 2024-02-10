#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int tempature;
    string output;

    cin >> tempature;

    if (tempature >= 100)
    {
        output = "vapor";
    }
    else if (tempature < 0)
    {
        output = "ice";
    }
    else
    {
        output = "water";
    }

    cout << output;

    return 0;
}