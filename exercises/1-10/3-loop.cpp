#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Тоо оруулна уу!" << endl;
    cin >> number;
    while (number != 0)
    {

        if (number % 2 == 0)
        {
            cout << "Тоо тэгш байна!" << endl;
        }
        else
        {
            cout << "Тоо сондгой байна!" << endl;
        }

        cout << "Ахиад тоо оруулна уу!" << endl;
        cin >> number;
    }
    return 0;
}