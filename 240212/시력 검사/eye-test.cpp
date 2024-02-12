#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a, b;
    string output;

    cin >> a;
    cin >> b;

    if (a >= 1.0f && b >= 1.0f)
    {
        output = "High";
    }
    else if (a >= 0.5f && b >= 0.5f)
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