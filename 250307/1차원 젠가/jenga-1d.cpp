#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int blocks[101] = { 0, };

    for (int i = 0; i < n; ++i)
        cin >> blocks[i];

    int s1, e1, s2, e2;

    cin >> s1 >> e1;
    cin >> s2 >> e2;

    int temp[101] = { 0, };
    int tempIndex = 0;
    
    for (int i = 1; i <= n; ++i)
    {
        if (i >= s1 && i <= e1)
            continue;
        
        temp[tempIndex++] = blocks[i - 1];
    }

    int loopEnd = n - (e1 - s1 + 1);
    int blocksIndex = 0;

    for (int i = 1; i <= loopEnd; ++i)
    {
        if (i >= s2 && i <= e2)
            continue;
        
        blocks[blocksIndex++] = temp[i - 1];
    }

    loopEnd -= (e2 - s2 + 1);

    cout << loopEnd << endl;

    for (int i = 1; i <= loopEnd; ++i)
        cout << blocks[i - 1] << endl;    

    return 0;
}
