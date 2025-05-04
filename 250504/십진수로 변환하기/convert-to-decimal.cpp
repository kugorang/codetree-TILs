#include <iostream>
#include <string>

using namespace std;

int main() {
    string binary;
    cin >> binary;

    int answer = 0;
    
    for (const char &ch : binary)
    {
        answer <<= 1;

        if (ch == '1')
            answer += 1;
    }

    cout << answer;

    return 0;
}