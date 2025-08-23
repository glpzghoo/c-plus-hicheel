#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Тоо оруулна уу~ ";
    cin >> number;
    if (number <= 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (number == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    long long a = 0, b = 1;
    for (int i = 2; i <= number; i++)
    {
        long long c = a + b;
        a = b;
        b = c;
    }

    cout << b << endl;
    return 0;
}