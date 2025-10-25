#include <iostream>
#include <cstdlib>   // для rand()
#include <ctime>    // для time()
using namespace std;

int main() {
    //объявляем массив 
    int numbers[5];

    // выводим элементы массива
    cout << "Элементы массива: ";

    // для использования генератора случайных чисел
    srand(time(0));

    // заполнение массива случ. числами и вывод элементов
    for (int i = 0; i < 5; i++) {
        numbers[i] = rand() % 10;  //случайные числа (от 0 до 9)
        cout << numbers[i] << " ";
    }

    return 0;
}