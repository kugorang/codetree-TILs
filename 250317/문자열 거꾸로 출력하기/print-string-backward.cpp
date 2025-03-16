#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        string str;
        cin >> str;

        if (str.compare("END") == 0)
            break;
        
        reverse(str.begin(), str.end());

        cout << str << endl;
    }

    return 0;
}