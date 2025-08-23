#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int number;
    int result;
    cout << "Тоогоо оруулна уу~ ";
    cin >> number;
    int numbers[number];
    numbers[0] = 0;
    numbers[1] = 1;
    for (int i = 2; i < number; i++)
    {
        numbers[i] = numbers[i - 1] + numbers[i - 2];
    }

    cout << numbers[number - 1] << endl;

    cout << "Фибоначи: ";
    for (int i = 0; i < number; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}