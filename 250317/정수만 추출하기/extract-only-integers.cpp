#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    string answer1, answer2;
    answer1.reserve(str1.length());
    answer2.reserve(str2.length());

    for (auto &ch : str1)
    {
        if (!isdigit(ch))
            break;
        answer1.push_back(ch);
    }

    for (auto &ch : str2)
    {
        if (!isdigit(ch))
            break;
        answer2.push_back(ch);
    }

    cout << stoi(answer1) + stoi(answer2);

    return 0;
}