#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
private:
    string name;
    int score1, score2, score3;

public:
    Student() {}

    Student(string name, int score1, int score2, int score3)
    {
        this->name = name;
        this->score1 = score1;
        this->score2 = score2;
        this->score3 = score3;
    }

    int GetTotalScore()
    {
        return score1 + score2 + score3;
    }

    void PrintInfo()
    {
        cout << name << ' ' << score1 << ' ' << score2 << ' ' << score3 << endl;
    }
};

bool SortByTotalScore(Student student1, Student student2)
{
    return student1.GetTotalScore() < student2.GetTotalScore();
}

int main()
{
    int n;
    cin >> n;

    Student students[10];

    for (int i = 0; i < n; ++i)
    {
        string name;
        int score1, score2, score3;

        cin >> name >> score1 >> score2 >> score3;

        students[i] = Student(name, score1, score2, score3);
    }

    sort(students, students + n, SortByTotalScore);

    for (int i = 0; i < n; ++i)
        students[i].PrintInfo();

    return 0;
}