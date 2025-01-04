#include <iostream>
using namespace std;

enum result_grade
{
    A,
    B,
    C,
    D
};

int main() 
{
    int result[4] = { 0, }; // A ~ D

    for (int i = 0; i < 3; ++i) 
    {
        char haveCold;
        float temperature;

        cin >> haveCold >> temperature;

        if (haveCold == 'Y')
        {
            if (temperature >= 37)
                ++result[(result_grade)A];
            else
                ++result[(result_grade)C];
        }
        else
        {
            if (temperature >= 37)
                ++result[(result_grade)B];
            else
                ++result[(result_grade)D];
        }
    }

    for (int i = 0; i < 4; ++i)
        cout << result[i] << ' ';
    
    if (result[(result_grade)A] >= 2)
        cout << 'E';

    return 0;
}