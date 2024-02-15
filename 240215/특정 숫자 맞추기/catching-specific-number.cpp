#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.    
    int inputNum;

    do
    {
        cin >> inputNum;

        string output;

        if (inputNum > 25)
        {
            output = "Lower";
        }
        else if (inputNum < 25)
        {
            output = "Higher";
        }
        else
        {
            output = "Good";
        }

        cout << output << endl;
    } while (inputNum != 25);

    return 0;
}