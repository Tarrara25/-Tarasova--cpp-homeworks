#include <iostream>
using namespace std;

int main() {
    // Входные данные
    int nums[] = { 2,7,11,15 };
    int target = 9;
    int size = 4;


    // Выводим входные данные
    cout << "Входные данные: [";
    for (int i = 0; i < size; i++) {
        cout << nums[i];
        if (i < size - 1) cout << ", ";
    }
    cout << "], target = " << target << endl;

    // Алгоритм для перебора все пар
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (nums[i] + nums[j] == target) {
                cout << "Выходные данные: " << i << ", " << j << endl;
                cout << "Объяснение: nums[" << i << "] + [" << j << "] = " << nums[i] << " + " << nums[j] << " = " << target << endl;
                return 0;
            }
        }
    }

    cout << "Пара не найдена" << endl;
    return 0;
}