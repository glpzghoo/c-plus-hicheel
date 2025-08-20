#include <iostream>
using namespace std;

bool isEven(int n) {
    if(n % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main () {
    int number;
    bool result;
    while (number != 0) {
        cout << "Тоо оруулна уу!" << endl;
        cin >> number;
      result = isEven(number);
      if(result){
         cout << "Тоо тэгш байна!"   << endl;
      }else{
         cout << "Тоо сондгой байна!"   << endl;
      }
    }
     cout << "Bye" << endl;
    return 0;
}