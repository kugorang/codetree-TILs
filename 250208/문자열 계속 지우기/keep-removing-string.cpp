#include <iostream>
#include <string>

using namespace std;

int main()
{
    string A, B;

    cin >> A >> B;
    int bLen = B.length();

    while (true)
    {
        int bIndex = A.find(B);

        if (bIndex == string::npos)
            break;
        
        A.erase(bIndex, bLen);
    }

    cout << A;

    return 0;
}
