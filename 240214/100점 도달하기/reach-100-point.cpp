#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    for (int i = n; i <= 100; i++)
    {
        char output;

        if (i >= 90)
        {
            output = 'A';
        }
        else if (i >= 80)
        {
            output = 'B';
        }
        else if (i >= 70)
        {
            output = 'C';
        }
        else if (i >= 60)
        {
            output = 'D';
        }
        else
        {
            output = 'F';
        }

        cout << output << ' ';
    }

    return 0;
}