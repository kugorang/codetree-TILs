#include <iostream>
using namespace std;

int main() {
    string str;
    cin >> str;

    string answer;
    answer.reserve(str.length());

    for (auto &ch : str)
        if (isalnum(ch))
            answer.push_back(isupper(ch) ? tolower(ch) : ch);

    cout << answer;        
    
    return 0;
}