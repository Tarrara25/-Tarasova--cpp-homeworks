#include <iostream>
using namespace std;

int main(){
    double number;
    
    // Запрос числа у пользователя
    cout << "Enter a number: ";
    cin >> number;
    
    // Вывод как double
    cout << "As a double: " << number << "\n";
    
    // Приведение к int и вывод
    int intNumber = static_cast<int>(number);
    cout << "As a int: " << intNumber << "\n";
    
    // Приведение к bool и вывод с сообщением
    bool boolNumber = static_cast<bool>(number);
    cout << "Is the number not equal to 0? " << boolalpha << boolNumber << "\n";
    
    return 0;
}