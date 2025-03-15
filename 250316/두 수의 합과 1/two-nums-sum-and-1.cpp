#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    string str = to_string(a + b);
    
    int answer = 0;

    for (auto &ch : str)
        if (ch == '1')
            ++answer;
    
    cout << answer;

    return 0;
}