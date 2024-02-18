#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int loopEndNum = sqrt(n);
    char output = 'P';

    for (int i = 2; i <= loopEndNum; i++)
    {
        if (i % loopEndNum == 0)
        {
            output = 'C';
        }
    }

    cout << output;

    return 0;
}