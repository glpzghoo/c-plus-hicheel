#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    for(int i = 0; i < 5; i++){
        cout << "Тоо оруулна уу!" << endl;
        cin >> numbers[i];
    }

    int largest = numbers[0];
    int smallest = numbers[0];
    double sum = 0;
    int length = 0;
    for( int i = 0; i < 5; i++){
        if(largest < numbers[i]){
            largest = numbers[i];
        }else if(smallest > numbers[i]){
            smallest = numbers[i];
        }
        sum += numbers[i];
        length++;
    }
    double average = sum / length;

    cout << "Хамгийн их тоо: " << largest << endl;
    cout << "Хамшийн бага тоо: " << smallest << endl;
    cout << "Нийлбэр: " << sum << endl;
    cout << "Дундаж: " << average << endl;
    return 0;
}