#include <iostream>
#include <algorithm>

using namespace std;

class Person
{
private:
    string name;
    int height;
    float weight;

public:
    Person() {}

    Person(string name, int height, float weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }

    string GetName()
    {
        return name;
    }

    int GetHeight()
    {
        return height;
    }

    void PrintInfo()
    {
        cout.precision(1);
        cout << fixed << name << ' ' << height << ' ' << weight << endl;
    }
};

bool ComparePersonByName(Person person1, Person person2)
{
    return person1.GetName() < person2.GetName();
}

bool ComparePersonByHeight(Person person1, Person person2)
{
    return person1.GetHeight() > person2.GetHeight();
}

int main()
{
    Person person[5];

    for (int i = 0; i < 5; ++i)
    {
        string name;
        int height;
        float weight;
        
        cin >> name >> height >> weight;

        person[i] = Person(name, height, weight);
    }

    cout << "name" << endl;

    sort(person, person + 5, ComparePersonByName);

    for (int i = 0; i < 5; ++i)
        person[i].PrintInfo();

    cout << endl << "height" << endl;

    sort(person, person + 5, ComparePersonByHeight);

    for (int i = 0; i < 5; ++i)
        person[i].PrintInfo();

    return 0;
}