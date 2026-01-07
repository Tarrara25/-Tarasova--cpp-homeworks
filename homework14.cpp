#include <iostream>
#include <string>
using namespace std;

int main() {
    // Вводим количество элементов
    int n;
    cout << "Введите количество элементов: ";
    cin >> n;

    // Массив для хранения строк
    string words[100];

    // Ввод строк
    cout << "Введите " << n << " слов (в нижнем регистре):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> words[i];
    }

    // Начальное значение
    bool current = true;

    // Массив для результатов
    bool results[100];

    // Обрабатываем каждое слово
    for (int i = 0; i < n; i++) {

        // Если слово "flick" - меняем значение на противоположное
        if (words[i] == "flick") {
            current = !current; // Изменяется сразу
        }

        // Записываем текущее значение
        results[i] = current;
    }

    // Выводим результат
    cout << "Выходные данные: [";
    for (int i = 0; i < n; i++) {
        if (results[i]) {
            cout << "true";
        }
        else {
            cout << "false";
        }

        // Добавляем запятую, если не последний элемент
        if (i < n - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    return 0;
}
