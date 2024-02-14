#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n;

    cin >> a >> n;
    
    int result = a;

    for (int i = 0; i < n; i++)
    {
        result += n;

        cout << result << endl;
    }

    return 0;
}