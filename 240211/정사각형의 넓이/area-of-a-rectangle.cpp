#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int area = n * n;

    cout << area;

    if (n < 5)
    {
        cout << endl << "tiny";
    }

    return 0;
}