#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
private:
    int height;
    int weight;
    int number;

public:
    Student() {}

    Student(int h, int w, int n)
    {
        height = h;
        weight = w;
        number = n;
    }

    int GetHeight()
    {
        return height;
    }

    int GetWeight()
    {
        return weight;
    }

    void PrintInfo()
    {
        cout << height << ' ' << weight << ' ' << number << endl;
    }
};

bool CompareStudent(Student student1, Student student2)
{
    if (student1.GetHeight() == student2.GetHeight())
        return student1.GetWeight() > student2.GetWeight();

    return student1.GetHeight() < student2.GetHeight();
}

int main()
{
    int N;
    cin >> N;

    Student student[N];

    for (int i = 0; i < N; ++i)
    {
        int h, w;

        cin >> h >> w;

        student[i] = Student(h, w, i + 1);
    }
    
    sort(student, student + N, CompareStudent);

    for (int i = 0; i < N; ++i)
        student[i].PrintInfo();

    return 0;
}