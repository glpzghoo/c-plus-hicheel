#include <iostream>
using namespace std;

int main()
{
    string name;
    int firstnumber;
    int secondnumber;
    int sum;
    int diff;
    int product;
    int quo;
    cout << "Таны нэрийг хэн гэдэг вэ?";
    cin >> name;
    cout << "Нэг тоо оруулна уу!";
    cin >> firstnumber;
    cout << "Ахиад нэг тоо оруулна уу!";
    cin >> secondnumber;
    sum = firstnumber + secondnumber;
    diff = firstnumber - secondnumber;
    product = firstnumber * secondnumber;
    if (secondnumber != 0)
    {
        quo = firstnumber / secondnumber;
    }
    cout << "Таны нэрийг " + name + " гэдэг!" << endl;
    cout << "Таны оруулсан тоонууд: " << firstnumber << " бас " << secondnumber << endl;
    cout << "Хоёр тооны нийлбэр: " << sum << endl;
    cout << "Ялгаа бол: " << diff << endl;
    cout << "Үржвэрийн хариу: " << product << endl;
    cout << "Хуваасны хариу: " << quo << endl;
    return 0;
}