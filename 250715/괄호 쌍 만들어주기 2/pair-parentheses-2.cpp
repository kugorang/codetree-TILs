#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    cin >> str;

    int strLen = str.length();
    int count = 0;

    for (int i = 0; i < strLen - 3; ++i)
    {
        if (!(str[i] == '(' && str[i + 1] == '('))
            continue;
        
        for (int j = i + 2; j < strLen - 1; ++j)
            if (str[j] == ')' && str[j + 1] == ')')
                ++count;
    }

    cout << count;
    
    return 0;
}