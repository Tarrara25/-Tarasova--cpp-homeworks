#include <iostream>  

using namespace std;

//объявляем функцию для увеличения числа на 10
void increase(int& x) {
    x = x + 10;
}

int main() {
    // запрашиваем число
    int number;
    cout << "Введите число: ";
    cin >> number;

    // вызываем функцию
    increase(number);

    //выводим результат
    cout << "Новое значение: " << number;

    return 0;
}