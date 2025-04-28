#include <iostream>

#define MAX_N 5

using namespace std;

class Agent
{
private:
    char name;
    int score;

public:
    Agent() {}

    Agent(char name, int score)
    {
        this->name = name;
        this->score = score;
    }

    bool IsScoreLower(int target)
    {
        return score < target;
    }

    void PrintInfo()
    {
        cout << name << ' ' << score;
    }
};

int main()
{
    char codename[MAX_N];
    int score[MAX_N];
    Agent agents[MAX_N];

    for (int i = 0; i < MAX_N; ++i)
    {
        cin >> codename[i] >> score[i];
        agents[i] = Agent(codename[i], score[i]);
    }

    int minIndex = 0;

    for (int i = 1; i < MAX_N; ++i)
        if (agents[i].IsScoreLower(score[i]))
            minIndex = i;

    agents[minIndex].PrintInfo();

    return 0;
}
