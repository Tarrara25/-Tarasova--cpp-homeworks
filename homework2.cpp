#include <iostream>
using namespace std;

int main() {
	cout << "firstNumber:";		// Выводим запрос на значение
	float firstNumber;			//объявляем переменную 
	cin >> firstNumber;			//вводим число с клавиатуры
	cout << "secondNumber:";	// Выводим запрос на значение
	float secondNumber;			//объявляем переменную
	cin >> secondNumber;		//вводим число с клавиатуры
	float Plus = firstNumber + secondNumber;		// считаем сумму
	float Minus = firstNumber - secondNumber;		// считаем расность
	float Multiply = firstNumber * secondNumber;	// считаем произведение
	cout << "Sum = " << Plus << "\n";				//выводим ответ
	cout << "Cubtraction = " << Minus << "\n";		//выводим ответ
	cout << "Сomposition = " << Multiply << "\n";	//выводим ответ
	return 0;
}