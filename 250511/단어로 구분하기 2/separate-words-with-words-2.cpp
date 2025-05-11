#include <iostream>
#include <string>

using namespace std;

int main()
{
    string words[10];

    for (int i = 0; i < 10; ++i)
    {
        cin >> words[i];

        if (i % 2 == 0)
            cout << words[i] << endl;
    }

    return 0;
}