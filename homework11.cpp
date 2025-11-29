#include <iostream>
using namespace std;

int main() {
    string romanNumeral;
    cout << "Входные данные: s = ";
    cin >> romanNumeral;

    int decimalValue = 0;  // переменная для итогового десятичного числа, которое мы получим после преобразования римского числа
    int n = romanNumeral.length(); // переменная, которая определяет сколько римских цифр нам нужно обработать

    // Используем обычный массив достаточного размера
    int values[100]; // предполагаем, что число не длиннее 100 символов

    // цикл с оператором Switch, который преобразует каждый символ римского числа в соответствующее числовое значение
    for (int i = 0; i < n; i++) {
        switch (romanNumeral[i]) {
        case 'I': values[i] = 1; break;
        case 'V': values[i] = 5; break;
        case 'X': values[i] = 10; break;
        case 'L': values[i] = 50; break;
        case 'C': values[i] = 100; break;
        case 'D': values[i] = 500; break;
        case 'M': values[i] = 1000; break;
        }
    }

    // складываем все значения
    for (int i = 0; i < n; i++) {
        decimalValue += values[i];
    }

    // корректировка результата
    for (int i = 0; i < n - 1; i++) {

        // если меньшая цифра стоит перед большей - вычитаем
        if (values[i] < values[i + 1]) {
            // исправляем ошибку двойного учета меньшей цыфры в комбинациях вычитания
            decimalValue = decimalValue - (2 * values[i]);
        }
    }

    cout << "Выходные данные: " << decimalValue << endl;

    return 0;
}