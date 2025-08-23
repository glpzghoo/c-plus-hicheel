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

    for (int j = 0; j < 5 - 1; j++)
    {
        for (int i = 0; i < 5 - j - 1; i++)
        {
            if (numbers[i] > numbers[i + 1])
            {
                int temp = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = temp;
            }
        }
    }

    cout << "Өсөх дарааллаар: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }

    cout << "Буурах дарааллаар: ";
    for (int i = 4; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}