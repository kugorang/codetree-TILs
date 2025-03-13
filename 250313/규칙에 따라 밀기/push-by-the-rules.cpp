#include <iostream>
using namespace std;

int main() {
    string A, command;
    cin >> A >> command;

    int ALength = A.length();
    int commandLength = command.length();

    for (int i = 0; i < commandLength; ++i)
    {
        char temp;

        switch (command[i])
        {
        case 'L':
            temp = A[0];

            for (int j = 0; j < ALength - 1; ++j)
                A[j] = A[j + 1];
            
            A[ALength - 1] = temp;
            break;
        case 'R':
            temp = A[ALength - 1];

            for (int j = ALength - 1; j > 0; --j)
                A[j] = A[j - 1];
            
            A[0] = temp;
            break;
        }
    }

    cout << A;

    return 0;
}