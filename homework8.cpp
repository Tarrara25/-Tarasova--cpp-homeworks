#include <iostream>  
#include <string>  // дл€ работы со строками

using namespace std;

int main() {
    // определ€ем и зпрашиваем строку
    string word;
    cout << "¬ведите строку: ";
    getline(cin, word); // считываем строку


    //определ€ем размер
    int size = word.length();

    cout << "¬ывод: ";
    //задаем циклы for дл€ проверки на повторение символов
    int count = 0;
    for (int i = 0; i < size; i++) {
        // пропускаем пробелы
        if (word[i] == ' ') {
            continue;
        }
        for (int j = i + 1; j < size; j++) {
            if (word[i] == word[j]) {
                cout << "false";
                return 0;
            }

        }
    }

    cout << "true";
    return 0;
}