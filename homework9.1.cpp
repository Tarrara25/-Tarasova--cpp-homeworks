#include <iostream>  

using namespace std;

//объ€вл€ем функцию дл€ подсчета квадрата числа
int square(int x) {
    int result = x * x;
    return result;
}

int main() {
    // запрашиваем число
    int number;
    cout << "¬ведите число: ";
    cin >> number;

    // вызываем функцию и выводим результат
    int result = square(number);
    cout << " вадрат: " << result;

    return 0;
}
