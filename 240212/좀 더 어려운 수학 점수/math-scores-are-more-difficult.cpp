#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mathA, englishA;
    int mathB, englishB;
    char output;

    cin >> mathA >> englishA;
    cin >> mathB >> englishB;

    if (mathA == mathB)
    {
        output = englishA > englishB ? 'A' : 'B';
    }
    else
    {
        output = mathA > mathB ? 'A' : 'B';
    }

    cout << output;

    return 0;
}