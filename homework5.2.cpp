#include <iostream>
using namespace std;

int main() {
    //объ€вл€ем переменную 
    int number;

    // запрос чисел у пользовател€
    cout << "¬ведите число: ";
    cin >> number;

    // проверка числа с помощью if-else
    if (number > 0) {
        // случай, a > 0 истинно
        cout << "„исло положительно " << "\n";
    }
    else if (number < 0) {
        // случай, когда a > 0 ложно, а a < 0 истинно
        cout << "„исло отрицательное " << "\n";
    }
    else if (number == 0) {
        cout << "„исло нуль " << "\n";
    }
    return 0;
}