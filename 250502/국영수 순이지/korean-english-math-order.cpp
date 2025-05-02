#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Student
{
private:
    string name;
    int korean, english, math;

public:
    Student() {}

    Student(string name, int korean, int english, int math)
    {
        this->name = name;
        this->korean = korean;
        this->english = english;
        this->math = math;
    }

    int GetKorean()
    {
        return korean;
    }

    int GetEnglish()
    {
        return english;
    }

    int GetMath()
    {
        return math;
    }

    void PrintInfo()
    {
        cout << name << ' ' << korean << ' ' << english << ' ' << math << endl;
    }
};

bool CompareScore(Student student1, Student student2)
{
    if (student1.GetKorean() != student2.GetKorean())
        return student1.GetKorean() > student2.GetKorean();
    
    if (student1.GetEnglish() != student2.GetEnglish())
        return student1.GetEnglish() > student2.GetEnglish();
    
    return student1.GetMath() > student2.GetMath();
}

int main() {
    int n;
    cin >> n;

    Student students[10];

    for (int i = 0; i < n; ++i)
    {
        string name;
        int korean, english, math;

        cin >> name >> korean >> english >> math;

        students[i] = Student(name, korean, english, math);
    }

    sort(students, students + n, CompareScore);

    for (int i = 0; i < n; ++i)
        students[i].PrintInfo();

    return 0;
}