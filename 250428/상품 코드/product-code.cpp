#include <iostream>
#include <string>

using namespace std;

class Product
{
private:
    string name;
    int code;

public:
    Product()
    {
        name = "codetree";
        code = 50;
    }

    Product(string name, int code)
    {
        this->name = name;
        this->code = code;
    }

    void PrintInfo()
    {
        cout << "product " << code << " is " << name << endl;
    }
};

int main() {
    string product_name;
    int product_code;

    cin >> product_name >> product_code;

    Product product1;
    Product product2(product_name, product_code);

    product1.PrintInfo();
    product2.PrintInfo();

    return 0;
}