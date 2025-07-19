#include <iostream>
#include <string>
#include <climits>

using namespace std;

int ConvertNum(string a)
{
    int result = 0;

    for(char ch : a)
        result = (result << 1) + (ch == '1' ? 1 : 0);
    
    return result;
}

int main()
{
    string a;
    cin >> a;

    int aLength = a.length();
    int maxNum = 0;

    for (int i = 1; i < aLength; ++i)
    {
        a[i] = (a[i] == '0') ? '1' : '0';
        int aNum = ConvertNum(a);

        if (aNum > maxNum)
            maxNum = aNum;
    }

    cout << maxNum;

    return 0;
}