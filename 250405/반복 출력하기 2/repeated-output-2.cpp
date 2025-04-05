#include <iostream>

using namespace std;

void PrintHelloWorld(int N)
{
    if (N == 0)
        return;

    PrintHelloWorld(N - 1);
    cout << "HelloWorld" << endl;
}

int main() {
    int N;
    cin >> N;
    
    PrintHelloWorld(N);

    return 0;
}