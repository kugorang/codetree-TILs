#include <iostream>
using namespace std;

int main() {
    string inputStr;
    cin >> inputStr;

    string answer;
    answer.reserve(inputStr.length());

    for (auto &ch : inputStr)
        if (isalpha(ch))
            answer.push_back((islower(ch) ? toupper(ch) : ch));
            
    cout << answer;

    return 0;
}