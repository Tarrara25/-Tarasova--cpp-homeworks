#include <iostream>
using namespace std;

int main() {
	cout << "length: a = ";		// Выводим запрос на значение
	float a;					//объявляем переменную 
	cin >> a;					//вводим число с клавиатуры
	cout << "width: b = ";		// Выводим запрос на значение
	float b;					//объявляем переменную
	cin >> b;					//вводим число с клавиатуры
	float Perimeter = 2 * (a + b);						// считаем периметр
	float Square = a * b;								// считаем площадь
	cout << "Perimeter: P = " << Perimeter << "\n";		//выводим ответ
	cout << "Square: S = " << Square << "\n";			//выводим ответ
	return 0;
}