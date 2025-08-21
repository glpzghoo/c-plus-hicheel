#include <iostream>
using namespace std;

void recursiveNumbers(int n)
{
    if (n <= 0)
        return;

    cout << n << " ";
    recursiveNumbers(n - 1);
}

void recursiveNumbers2(int n)
{
    if (n <= 0)
        return;
    recursiveNumbers2(n - 1);

    cout << n << " ";
}

int main()
{
    int number;
    cout << "Тоо оруулна уу~ ";
    cin >> number;
    recursiveNumbers2(number);
    cout << endl;
    return 0;
}