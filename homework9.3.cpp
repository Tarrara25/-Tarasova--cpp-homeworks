#include <iostream>  

using namespace std;

//рекурсивная функция для вычисления факториала
long long factorial(int n) {
    if (n == 0 || n == 1) {  // базовый случай
        return 1;
    }
    return n * factorial(n - 1); //рекурсивный вызов
}

int main() {
    // запрашиваем число
    int number;
    cout << "Введите число: ";
    cin >> number;

    //вызываем функцию и выводим результат
    cout << "Факториал: " << factorial(number);

    return 0;
}