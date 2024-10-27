#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        int a, b;

        cin >> a >> b;

        int evenSum = 0;

        for (int j = a; j <= b; ++j)
            if (j % 2 == 0)
                evenSum += j;       
        
        cout << evenSum << endl;
    }

    return 0;
}