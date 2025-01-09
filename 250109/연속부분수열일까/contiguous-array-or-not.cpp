#include <iostream>
using namespace std;

int main() {
    int n1[101], n2[101];

    cin >> n1[0] >> n2[0];

    for (int i = 1 ; i < n1[0]; ++i)
        cin >> n1[i];
    
    for (int i = 1; i < n2[0]; ++i)
        cin >> n2[i];
    
    int start = 1;

    for (; start < n1[0]; ++start)
        if (n1[start] == n2[1])
            break;

    if (start == n1[0])
    {
        cout << "No";
        return 0;
    }

    for (int i = 2; i < n2[0]; ++i)
    {
        if (n1[start - 1 + i] != n2[i])
        {
            cout << "No";
            return 0;
        }
    }
        
    cout << "Yes";

    return 0;
}