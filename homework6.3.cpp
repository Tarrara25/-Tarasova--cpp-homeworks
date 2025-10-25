#include <iostream>  
#include <string>  // для работы со строками

using namespace std;

int main() {
    // определяем и запрашиваем строку
    string word;
    cout << "Введите строку: ";
    getline(cin, word); // считываем строку

    // Выводим первый элемент строки
    cout << "Первый символ: " << word[0];

    return 0;
}