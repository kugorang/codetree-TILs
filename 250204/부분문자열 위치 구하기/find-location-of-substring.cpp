#include <iostream>
#include <string>

using namespace std;

string input_str;
string target_str;

int main() {
    cin >> input_str;
    cin >> target_str;

    int target_index = input_str.find(target_str);

    cout << ((target_index == string::npos) ? -1 : target_index);

    return 0;
}
