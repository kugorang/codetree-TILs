#include <iostream>
using namespace std;

int main() {
    int studentNum;

    cin >> studentNum;

    int passedStudentsCount = 0;

    for (int i = 0; i < studentNum; ++i)
    {
        int examScoreSum = 0;

        for (int j = 0; j < 4; ++j)
        {
            int examScore;

            cin >> examScore;

            examScoreSum += examScore;
        }

        if (examScoreSum / 4 >= 60)
        {
            cout << "pass" << endl;
            ++passedStudentsCount;
        }
        else
            cout << "fail" << endl;
            
    }

    cout << passedStudentsCount;

    return 0;
}