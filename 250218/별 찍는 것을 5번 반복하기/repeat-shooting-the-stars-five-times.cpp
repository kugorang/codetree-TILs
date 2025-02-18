#include <iostream>

using namespace std;

void Make10Stars();

int main()
{
    for (int i = 0; i < 5; ++i)
        Make10Stars();
}

void Make10Stars()
{
    for (int i = 0; i < 10; ++i)
        cout << '*';
    cout << endl;
}