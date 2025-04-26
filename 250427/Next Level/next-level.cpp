#include <iostream>
#include <string>

using namespace std;

class User
{
private:
    string id;
    int level;

public:
    User()
    {
        this->id = "codetree";
        this->level = 10;
    }

    User(string id, int level)
    {
        this->id = id;
        this->level = level;
    }

    void PrintInfo()
    {
        cout << "user " << id << " lv " << level << endl;
    }
};

int main()
{
    string user2_id;
    int user2_level;

    cin >> user2_id >> user2_level;

    User().PrintInfo();
    User(user2_id, user2_level).PrintInfo();

    return 0;
}