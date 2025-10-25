#include <iostream>

using namespace std;

int main() {
    //объ€вл€ем двумерный массив размером 3х3 
    int matrix[3][3];

    // заполнение числами от 1 до 9 
    int counter = 1;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = counter++;
        }
    }

    // ¬ыводим элементы массива
    cout << "Ёлементы массива: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
    }
    cout << "\n";

    // считаем сумму всех элементов
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    // выводим сумму 
    cout << "—умма элементов: " << sum;

    return 0;
}