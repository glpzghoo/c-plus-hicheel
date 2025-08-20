#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Тоо: " << endl;
    cin >> number;
    if(number % 2 == 0){
        cout << number << " тэгш тоо байна!" << endl;
    }else{
        cout << number << " сондгой тоо байна!" << endl;
    }
    return 0;
}