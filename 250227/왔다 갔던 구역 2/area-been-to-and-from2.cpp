#include <iostream>

using namespace std;

int main()
{
    int arr[2001] = { 0, };
    int n;
    cin >> n;

    int currentIndex = 1000;

    for (int i = 0; i < n; i++) 
    {
        int x;
        char dir;
        cin >> x >> dir;
        
        if (dir == 'L')
        {
            for (int j = x - 1; j >= 0; --j)
            {
                ++arr[--currentIndex];
            }
        }   
        else
        {
            for (int j = 0; j < x; ++j)
            {
                ++arr[currentIndex++];
            }
        }   
    }

    int count = 0;
    
    for (int i = 0; i < 2001; ++i)
        if (arr[i] >= 2)
            ++count;
    
    cout << count;

    return 0;
}