#include <iostream>
using namespace std;

int main()
{
    int numbers[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Тоо оруулна уу!" << endl;
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int smallest = numbers[0];

    for (int i = 0; i < 5; i++)
    {
        if (largest < numbers[i])
        {
            largest = numbers[i];
        }
        if (smallest > numbers[i])
        {
            smallest = numbers[i];
        }
    }

    cout << "Хамгийн их тоо бол: " << largest << endl;
    cout << "Хамгийн бага тоо бол: " << smallest << endl;
    return 0;
}