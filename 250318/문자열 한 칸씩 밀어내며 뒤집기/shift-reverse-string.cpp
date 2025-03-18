#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    string input_str;
    int q;
    cin >> input_str >> q;

    int input_str_len = input_str.length();

    for (int i = 0; i < q; i++) 
    {
        int query_type;
        cin >> query_type;

        int tmp;

        switch (query_type)
        {
            case 1:
                tmp = input_str[0];

                for (int i = 0; i < input_str_len - 1; ++i)
                    input_str[i] = input_str[i + 1];

                input_str[input_str_len - 1] = tmp;

                break;
            case 2:
                tmp = input_str[input_str_len - 1];

                for (int i = input_str_len - 1; i > 0; --i)
                    input_str[i] = input_str[i - 1];

                input_str[0] = tmp;

                break;
            case 3:
                reverse(input_str.begin(), input_str.end());
                
                break;
        }
        
        cout << input_str << endl;
    }

    return 0;
}
