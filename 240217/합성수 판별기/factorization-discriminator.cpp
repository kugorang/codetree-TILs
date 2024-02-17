#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int endNum = sqrt(n);

    char output = 'N';

    for (int i = 2; i <= endNum; i++)
    {
        if (n % i == 0)
        {
            output = 'C';
        }
    }

    cout << output;

    return 0;
}