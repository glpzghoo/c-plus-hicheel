#include <iostream>
#include <vector>
using namespace std;

int findMax(const vector<int> &numbers, int n)
{
    if (n == 1)
        return numbers[0];

    return max(numbers[n - 1], findMax(numbers, n - 1));
}

int main()
{
    int number;
    cout << "Тоо оруулна уу~ ";
    cin >> number;
    while (number <= 0)
    {
        cout << "Эерэг тоо оруулна уу~ ";
        cin >> number;
    }

    vector<int> numbers(number);

    for (int i = 0; i < number; i++)
    {
        cout << (i + 1) << ": ";
        cin >> numbers[i];
    }

    int result = findMax(numbers, number);

    cout << "Max: " << result << endl;

    return 0;
}