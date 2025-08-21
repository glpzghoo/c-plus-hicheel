#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    for(int i = 0; i < 5; i++){
        cout << "Тоо оруулна уу!" << endl;
        cin >> numbers[i];
    }
    cout << "Тоонууд: ";
    for(int i = 5; i > 0; i--){
        cout << numbers[i - 1] << " ";
    };
    cout << endl;
 return 0;
}