#include <iostream>
using namespace std;

int sumArray(int arr[], int n)
{
    if (n == 0)
    {
        return 0;
    };

    int sum = arr[n - 1] + sumArray(arr, n - 1);
    return sum;
}

int main()
{
    int number;
    cout << "Тоогоо оруулна уу~";
    cin >> number;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        arr[i] = i * 2;
    }

    int result = sumArray(arr, number);

    cout << result << endl;

    return 0;
}