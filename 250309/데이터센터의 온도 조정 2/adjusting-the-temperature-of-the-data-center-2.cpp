#include <iostream>
#include <climits>

using namespace std;

int N, C, G, H;
int Ta[1000], Tb[1000];

int main()
{
    cin >> N >> C >> G >> H;

    int minValue = INT_MAX;
    int maxValue = INT_MIN;

    for (int i = 0; i < N; ++i)
    {
        cin >> Ta[i] >> Tb[i];

        minValue = min(minValue, Ta[i]);
        maxValue = max(maxValue, Tb[i]);
    }

    int answer = 0;

    for (int i = minValue; i <= maxValue; ++i)
    {
        int currentWork = 0;

        for (int j = 0; j < N; ++j)
        {
            if (i < Ta[j])
                currentWork += C;
            else if (i <= Tb[j])
                currentWork += G;
            else
                currentWork += H;   
        }

        answer = max(answer, currentWork);
    }

    cout << answer;        

    return 0;
}