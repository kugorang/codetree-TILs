#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int nums[100];

    cin >> n;

    for (int i = 0; i < n; ++i)
        cin >> nums[i];

    sort(nums, nums + n);

    for (int i = 0; i < n; ++i)
        cout << nums[i] << ' ';
    
    cout << endl;

    sort(nums, nums + n, greater<int>());

    for (int i = 0; i < n; ++i)
        cout << nums[i] << ' ';

    return 0;
}
