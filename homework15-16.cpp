#include <iostream>
using namespace std;

int main() {
    // Заданные параметры окружности
    int cx = 2;   // x центра
    int cy = -1;  // y центра
    int r = 5;    // радиус

    // Ввод координат точки
    int x, y;
    cout << "Введите координату x: ";
    cin >> x;
    cout << "Введите координату y: ";
    cin >> y;

    // Вычисляем квадрат расстояния от точки до центра
    int dx = x - cx;  // разница по x
    int dy = y - cy;  // разница по y
    int distance_squared = dx * dx + dy * dy;

    // Квадрат радиуса
    int r_squared = r * r;

    // Определяем положение точки
    if (distance_squared < r_squared) {
        cout << "Точка внутри окружности" << endl;
    }
    else if (distance_squared == r_squared) {
        cout << "Точка на границе окружности" << endl;
    }
    else {
        cout << "Точка вне окружности" << endl;
    }

    return 0;
}