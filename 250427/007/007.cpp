#include <iostream>
#include <string>

using namespace std;

class Agent007
{
private:
    string secret_code;
    char meeting_point;
    int time;

public:
    Agent007(string secret_code, char meeting_point, int time)
    {
        this->secret_code = secret_code;
        this->meeting_point = meeting_point;
        this->time = time;
    }

    void PrintInfo()
    {
        cout << "secret code : " << secret_code << endl
            << "meeting point : " << meeting_point << endl
            << "time : " << time;
    }
};

int main()
{
    string secret_code;
    char meeting_point;
    int time;

    cin >> secret_code >> meeting_point >> time;

    Agent007(secret_code, meeting_point, time).PrintInfo();

    return 0;
}