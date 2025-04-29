#include <iostream>

#define MAX_N 10

using namespace std;

class Person
{
private:
    string name;
    string street_address;
    string region;

public:
    Person() {}

    Person(string name, string street_address, string region)
    {
        this->name = name;
        this->street_address = street_address;
        this->region = region;
    }

    bool CompareName(Person target)
    {
        return name > target.name;
    }

    void PrintInfo()
    {
        cout << "name " << name << endl
            << "addr " << street_address << endl
            << "city " << region;
    }
};

int main() {
    int n;
    cin >> n;

    Person person[MAX_N];

    for (int i = 0; i < n; i++)
    {
        string name, street_address, region;
        cin >> name >> street_address >> region;

        person[i] = Person(name, street_address, region);
    }

    int minIndex = 0;

    for (int i = 1; i < n; ++i)
        if (person[i].CompareName(person[minIndex]))
            minIndex = i;

    person[minIndex].PrintInfo();

    return 0;
}