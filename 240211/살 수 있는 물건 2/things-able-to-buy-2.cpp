#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    string output;

    cin >> n;

    if (n >= 3000)
    {
        output = "book";
    }
    else if (n >= 1000)
    {
        output = "mask";
    }
    else if (n >= 500)
    {
        output = "pen";
    }
    else
    {
        output = "no";
    }

    cout << output;

    return 0;
}