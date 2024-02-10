#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a;
    string output;

    cin >> a;

    if (a >= 1.0f)
    {
        output = "High";
    }
    else if (a >= 0.5f)
    {
        output = "Middle";
    }
    else
    {
        output = "Low";
    }

    cout << output;

    return 0;
}