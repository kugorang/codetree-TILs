#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N, k;

    cin >> N >> k;

    int nums[1000];

    for (int i = 0; i < N; i++)
        cin >> nums[i];

    sort(nums, nums + N);

    cout << nums[k - 1];

    return 0;
}
