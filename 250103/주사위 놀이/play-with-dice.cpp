#include <iostream>
using namespace std;

int main() {
    int count[6] = { 0, };
    
    for (int i = 0; i < 10; ++i)
    {
        int inputNum;
        cin >> inputNum;
        ++count[inputNum - 1];
    }

    for (int i = 0; i < 6; ++i)
        cout << i + 1 << " - " << count[i] << endl;

    return 0;
}