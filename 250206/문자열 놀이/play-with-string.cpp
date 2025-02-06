#include <iostream>
using namespace std;

int main() {
    string str;
    int n;
    cin >> str >> n;

    int strLen = str.length();

    for (int i = 0; i < n; ++i)
    {
        int type;
        cin >> type;

        if (type == 1)
        {
            int a, b;
            cin >> a >> b;

            int tmp = str[a - 1];
            str[a - 1] = str[b - 1];
            str[b - 1] = tmp; 
        }
        else if (type == 2)
        {
            char a, b;
            cin >> a >> b;

            for (int j = 0; j < strLen; ++j)
                if (str[j] == a)
                    str[j] = b;
        }

        cout << str << endl;
    }
    
    return 0;
}