#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char coldStatus;
    int degree;
    char result;
    int emergencyCount = 0;

    for (int i = 0; i < 3; i++)
    {
        cin >> coldStatus >> degree;
        
        if (coldStatus == 'Y')
        {
            result = (degree >= 37) ? 'A' : 'C';
        }

        if (result == 'A')
        {
            emergencyCount++;
        }
    }

    cout << (emergencyCount >= 2 ? 'E' : 'N');
    
    return 0;
}