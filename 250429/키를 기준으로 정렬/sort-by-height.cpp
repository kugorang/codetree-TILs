#include <iostream>
#include <algorithm>

using namespace std;

class Person
{
private:
    string name;
    int height;
    int weight;

public:
    Person() {}

    Person(string name, int height, int weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    int GetHeight()
    {
        return height;
    }

    void PrintInfo()
    {
        cout << name << ' ' << height << ' ' << weight << endl;
    }
};

bool CompareHeight(Person &person1, Person &person2)
{
    return person1.GetHeight() < person2.GetHeight();
}

int main() {
    int n;
    cin >> n;

    Person person[10];

    for (int i = 0; i < n; ++i) {
        string name;
        int height, weight;
        cin >> name >> height >> weight;

        person[i] = Person(name, height, weight);
    }

    sort(person, person + n, CompareHeight);
    
    for (int i = 0; i < n; ++i)
        person[i].PrintInfo();

    return 0;
}