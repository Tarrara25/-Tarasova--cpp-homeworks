#include <iostream>
using namespace std;

int main() {
	cout << "length: a = ";		// ������� ������ �� ��������
	float a;					//��������� ���������� 
	cin >> a;					//������ ����� � ����������
	cout << "width: b = ";		// ������� ������ �� ��������
	float b;					//��������� ����������
	cin >> b;					//������ ����� � ����������
	float Perimeter = 2 * (a + b);						// ������� ��������
	float Square = a * b;								// ������� �������
	cout << "Perimeter: P = " << Perimeter << "\n";		//������� �����
	cout << "Square: S = " << Square << "\n";			//������� �����
	return 0;
}