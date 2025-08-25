#include <iostream>
using namespace std;

int main()
{
    int number = 42;
    int *ptr = &number;

    cout << "value of number: " << number << endl;
    cout << "addresso of number: " << &number << endl;
    cout << "pointor value: " << ptr << endl;
    cout << "value via pointer: " << *ptr << endl;

    return 0;
}