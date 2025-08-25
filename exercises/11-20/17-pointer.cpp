#include <iostream>
#include <string>
using namespace std;

int main()
{
    int myInt = 10;
    double myDouble = 1.5;
    string myString = "Adiya";

    int *intPtr = &myInt;
    double *doublePtr = &myDouble;
    string *stringPtr = &myString;

    cout << "Integer value: " << *intPtr << ", Address: " << intPtr << endl;
    cout << "Double value: " << *doublePtr << ", Address: " << doublePtr << endl;
    cout << "String value: " << *stringPtr << ", Address: " << stringPtr << endl;

    *intPtr += *intPtr;
    *doublePtr *= *doublePtr;
    *stringPtr = "adiyakhuu";

    cout << "дараа: " << *intPtr << ", " << *doublePtr << ", " << *stringPtr << endl;
    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        arr[i] = i * 2;
    }
    int *arrPtr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *(arrPtr + i) << " ";
    }
    cout << endl;
    return 0;
}
