#include <iostream>
#include <string>

using namespace std;

class Bomb
{
private:
    string unlock_code;
    char wire_color;
    int seconds;

public:
    Bomb(string unlock_code, char wire_color, int seconds)
    {
        this->unlock_code = unlock_code;
        this->wire_color = wire_color;
        this->seconds = seconds;
    }

    void PrintInfo()
    {
        cout << "code : " << unlock_code << endl
            << "color : " << wire_color << endl
            << "second : " << seconds;
    }
};

int main()
{
    string unlock_code;
    char wire_color;
    int seconds;

    cin >> unlock_code >> wire_color >> seconds;

    Bomb(unlock_code, wire_color, seconds).PrintInfo();

    return 0;
}