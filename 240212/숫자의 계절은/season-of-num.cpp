#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int m;
    string output;

    cin >> m;

    if ((m >= 1 && m <= 2) || m == 12)
    {
        output = "Winter";
    }
    else if (m >= 3 && m <= 5)
    {
        output = "Spring";
    }
    else if (m >= 6 && m <= 8)
    {
        output = "Summer";
    }
    else if (m >= 9 && m <= 11)
    {
        output = "Fall";
    }
    else
    {
        output = "Error";
    }

    cout << output;

    return 0;
}