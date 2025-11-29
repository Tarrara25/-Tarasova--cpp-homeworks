#include <iostream>
#include <iomanip>
using namespace std;


// объявляем класс Rectangle и создаем приватные поля(закрытые)
class Rectangle {
private:
    double width;
    double height;


public:
    // конструктор по умолчанию для создания прямоугольника с нулевыми размерами
    Rectangle() {
        width = 0.0;
        height = 0.0;
    }

    // конструктор с параметрами для создания прямоугольника с заданными размерами
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // (геттеры) узнаем значения приватных полей
    double getWidth() {
        return width;
    }

    double getHeight() {
        return height;
    }

    // (сеттеры) меняем значения приватных полей
    void setWidth(double w) {
        width = w;
    }

    void setHeight(double h) {
        height = h;
    }

    //  вычисление площади
    double area() {
        return width * height;
    }

    // маштабируем прямоугольник
    void scale(double coeff) {
        width = width * coeff;   // умножаем ширину на коэффициент
        height = height * coeff; // умножаем высоту на коэффициент
    }

    // показываем ширину, высоту и площадь
    void show() {
        // fixed и setprecision для вывода с десятичной точкой
        cout << fixed << setprecision(1); // 1 цифра после точки
        cout << "Ширина: " << width << endl;
        cout << "Высота: " << height << endl;
        cout << "Площадь: " << area() << endl;
    }
};
int main() {
    Rectangle rect(4.0, 3.0);
    rect.scale(2);  // увеличиваем в 2 раза
    rect.show();

    return 0;
}