#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int emergencyCount = 0;

    for (int i = 0; i < 3; i++)
    {
        char coldStatus;
        int degree;

        cin >> coldStatus >> degree;
        
        if (coldStatus == 'Y')
        {
            char grade = (degree >= 37) ? 'A' : 'C';
            
            if (grade == 'A')
            {
                emergencyCount++;
            }
        }
    }

    cout << (emergencyCount >= 2 ? 'E' : 'N');
    
    return 0;
}