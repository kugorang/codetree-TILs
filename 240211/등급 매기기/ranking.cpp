#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char grade;

    cin >> n;
    
    if (n >= 90)
    {
        grade = 'A';
    }
    else if (n >= 80)
    {
        grade = 'B';
    }
    else if (n >= 70)
    {
        grade = 'C';
    }
    else if (n >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    cout << grade;

    return 0;
}