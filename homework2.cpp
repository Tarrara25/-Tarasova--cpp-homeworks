#include <iostream>
using namespace std;

int main() {
	cout << "firstNumber:";		// ������� ������ �� ��������
	float firstNumber;			//��������� ���������� 
	cin >> firstNumber;			//������ ����� � ����������
	cout << "secondNumber:";	// ������� ������ �� ��������
	float secondNumber;			//��������� ����������
	cin >> secondNumber;		//������ ����� � ����������
	float Plus = firstNumber + secondNumber;		// ������� �����
	float Minus = firstNumber - secondNumber;		// ������� ��������
	float Multiply = firstNumber * secondNumber;	// ������� ������������
	cout << "Sum = " << Plus << "\n";				//������� �����
	cout << "Cubtraction = " << Minus << "\n";		//������� �����
	cout << "�omposition = " << Multiply << "\n";	//������� �����
	return 0;
}