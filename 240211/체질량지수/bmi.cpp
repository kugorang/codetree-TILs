#include <iostream>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float height, weight;

    cin >> height >> weight;

    height *= 0.01f;

    int bmi = weight / (height * height);

    cout << bmi;

    if (bmi >= 25)
    {
        cout << endl << "Obesity";
    }

    return 0;
}