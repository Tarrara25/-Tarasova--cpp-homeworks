#include <iostream>  
using namespace std;

int main() {
    // запрашиваем число
    int polydrome;
    cout << "¬вод: x = ";
    cin >> polydrome;

    // разворачиваем число
    int a = polydrome;
    int reversed = 0;
    while (a > 0) {
        reversed = reversed * 10 + a % 10;
        a = a / 10;
    }
    cout << "¬ывод: ";
    // провер€ем €вл€етс€ ли число полиндромом
    if (polydrome == reversed) {
        cout << "true";
    }
    else {
        cout << "false";
    }

    return 0;
}
