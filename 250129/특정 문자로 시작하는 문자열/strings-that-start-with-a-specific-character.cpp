#include <iostream>
using namespace std;

int main() {
    string arr[20];
    int arrLen[20];

    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        arrLen[i] = arr[i].length();
    }

    char ch;
    cin >> ch;

    int count = 0;
    float sum = 0;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i][0] == ch)
        {
            ++count;
            sum += arrLen[i];
        }
    }

    cout.precision(2);
    cout << count << ' ' << fixed << sum / count;

    return 0;
}