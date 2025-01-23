#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int countOfA = 0;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;
        
        sum += str.length();
        
        if (str[0] == 'a')
            ++countOfA;
    }

    cout << sum << ' ' << countOfA;

    return 0;
}