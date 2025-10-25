#include <iostream>
using namespace std;

int main() {
    //объ€вл€ем переменную 
    int N;

    // запрос чисел у пользовател€
    cout << "¬ведите N: ";
    cin >> N;

    cout << "„исла от 1 до " << N << ": ";

    // цикл for дл€ вывода чисел от 1 до N
    for (int i = 1; i <= N; ++i) {
        cout << i << " ";
    }
    return 0;
}