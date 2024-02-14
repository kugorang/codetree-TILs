#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;

    cin >> n;

    int classroomCleanCount = 0, corridorCleanCount = 0, bathroomCleanCount = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 12 == 0)
        {
            bathroomCleanCount++;
        }
        else if (i % 3 == 0)
        {
            corridorCleanCount++;
        }
        else if (i % 2 == 0)
        {
            classroomCleanCount++;
        }
    }

    cout << classroomCleanCount << ' ' << corridorCleanCount << ' ' << bathroomCleanCount;

    return 0;
}