#include <iostream>
using namespace std;

int main() {
	cout << "Enter your name:"; // Выводим запрос на имя
	string name; //объявляем переменную name
	cin >> name; //вводим имя с клавиатуры
	cout << "Hello, " << name; //выводим ответ
	return 0;
}