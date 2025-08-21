#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    for(int i = 0; i < 5; i++){
        cout << "Тоо оруулна уу! - ";
        cout << endl;
        cin >> numbers[i];
    }
    int largest = numbers[0];
    for(int i = 0; i < 5; i++){
        if(largest < numbers[i]){
            largest = numbers[i];
        }
    }
    cout << "Хамгийн их тоо бол: " << largest << endl;
    return 0;
}