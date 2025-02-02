#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string result = "";

    for (int i = 0; i < n; ++i)
    {
        string temp;
        cin >> temp;

        result += temp;
    }

    cout << result;
        

    return 0;
}