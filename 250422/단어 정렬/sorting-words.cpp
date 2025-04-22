#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    string word[100];

    for (int i = 0; i < n; i++)
        cin >> word[i];
        
    sort(word, word + n);

    for (int i = 0; i < n; i++)
        cout << word[i] << endl;

    return 0;
}