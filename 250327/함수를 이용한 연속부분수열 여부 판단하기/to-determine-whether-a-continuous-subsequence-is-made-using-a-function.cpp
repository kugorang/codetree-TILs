#include <iostream>

using namespace std;

string CaculateContinuousPartialSequence(int *a, int n1, int *b, int n2)
{
    for (int i = 0; i < n1 - n2; ++i)
    {
        bool isContinuousPartialSequence = true;

        for (int j = 0; j < n2; ++j)
        {
            if (a[i + j] != b[j])
            {
                isContinuousPartialSequence = false;
                break;
            }
        }

        if (isContinuousPartialSequence)
            return "Yes";
    }

    return "No";
}

int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    int a[100], b[100];

    for (int i = 0; i < n1; ++i)
        cin >> a[i];

    for (int i = 0; i < n2; ++i)
        cin >> b[i];
        
    cout << CaculateContinuousPartialSequence(a, n1, b, n2);

    return 0;
}