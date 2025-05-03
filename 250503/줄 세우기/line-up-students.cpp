#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
private:
    int height;
    int weight;
    int no;

public:
    Student() {}
    Student(int height, int weight, int no)
    {
        this->height = height;
        this->weight = weight;
        this->no = no;
    }

    int GetHeight()
    {
        return height;
    }

    int GetWeight()
    {
        return weight;
    }

    int GetNo()
    {
        return no;
    }

    void PrintInfo()
    {
        cout << height << ' ' << weight << ' ' << no << endl;
    }
};

bool CompareStudents(Student student1, Student student2)
{
    if (student1.GetHeight() != student2.GetHeight())
        return student1.GetHeight() > student2.GetHeight();
    
    if (student1.GetWeight() != student2.GetWeight())
        return student1.GetWeight() > student2.GetWeight();

    return student1.GetNo() < student2.GetNo();
}

int main()
{
    int N;
    cin >> N;

    Student students[N];

    for (int i = 0; i < N; ++i)
    {
        int h, w;
        cin >> h >> w;

        students[i] = Student(h, w, i + 1);
    }

    sort(students, students + N, CompareStudents);

    for (int i = 0; i < N; ++i)
        students[i].PrintInfo();

    return 0;
}
