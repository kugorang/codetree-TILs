#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
private:
    string name;
    int height, weight;

public:
    Student() {}

    Student(string name, int height, int weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
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
        cout << name << ' ' << height << ' ' << weight << endl;
    }
};

bool CompareHeight(Student student1, Student student2)
{
    if (student1.GetHeight() != student2.GetHeight())
        return student1.GetHeight() < student2.GetHeight();

    return student1.GetWeight() > student2.GetWeight();
}

int main() {
    int n;
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; ++i)
    {
        string name;
        int height, weight;

        cin >> name >> height >> weight;

        students[i] = Student(name, height, weight);
    }

    sort(students, students + n, CompareHeight);

    for (int i = 0; i < n; ++i)
        students[i].PrintInfo();

    return 0;
}