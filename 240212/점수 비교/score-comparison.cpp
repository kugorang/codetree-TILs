#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int mathA, englishA;
    
    cin >> mathA >> englishA;

    int mathB, englishB;

    cin >> mathB >> englishB;

    cout << (mathA > mathB && englishA > englishB ? 1 : 0);

    return 0;
}