#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;

    int ALength = A.length();

    for (int i = 0; i < ALength; ++i)
    {
        int tmp = A[ALength - 1];

        for (int j = ALength - 1; j > 0; --j)
            A[j] = A[j - 1];
        
        A[0] = tmp;

        if (A.compare(B) == 0)
        {
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;

    return 0;
}