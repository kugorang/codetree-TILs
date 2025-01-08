#include <iostream>
using namespace std;

int main() {
    int arr[101] = { 0, };
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; ++i)
        cin >> arr[i];

    for (int i = 0; i < q; ++i)
    {
        int queryNum;
        cin >> queryNum;

        switch (queryNum)
        {
            case 1:
                int a;
                cin >> a;

                cout << arr[a] << endl;
                break;
            case 2:
                bool found;
                int j;
                int b;

                cin >> b;

                found = false;
                j = 1;
                for (; j <= n ; ++j)
                {
                    if (arr[j] == b)
                    {
                        found = true;
                        break;
                    }   
                }
                cout << (found ? j : 0) << endl;
                break;
            case 3:
                int s, e;
                cin >> s >> e;

                for (int j = s; j <= e; ++j)
                {
                    if (j >= n)
                        break;

                    cout << arr[j] << ' ';
                }

                cout << endl;
                break;
        }
    }

    return 0;
}