#include "Triangle.h" 
#include <iostream> 
#include <Windows.h>//��� ��������� ���� � ������ 
using namespace std;



int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triangle ABC(8, 5, 7);//��������� ���� ��� 
	//ABC = ABC.Init(3, 5, 3);//���������� ���� 
	//ABC.Read(); 
	cout << "��������� ���" << endl;
	ABC.Display();//��������� �� ����� 
	ABC.toString();//��������� ���� ����� � ����� 
	Triangle BCA;
	BCA = BCA.Init(3, 4, 5);
	Triangle CAB(3, 60);
	cout << "��������� ���" << endl;
	CAB.Display();
	Triangle A = ABC + 30;
	cout << "A = ABC+30 = ";
	A.toString();//���������� ������ ��������������� ��������� +, ��� ��������� ������ ����� �� ����� ��-��
	Triangle B = ABC + CAB;
	cout << "B = ABC+CAB = ";
	B.toString();//���������� ������ ��������������� ��������� +, ��� ���� ����� 2 ����������
	Triangle C = ABC - BCA;
	cout << "C = ABC-BCA = ";
	C.toString();//���������� ������ ��������������� ��������� -, ��� ������ ����� 2 ����������
	A = A - 30;
	cout << "A-30 = ";
	A.toString();//���������� ������ ��������������� ��������� -, ��� ������ ����� ��-�� �� ������ �����, ���� ����� ������
	B = 50 - B;
	cout << "50-B = ";
	B.toString();//���������� ������ ��������������� ��������� -, ��� ������ ����� ��-�� �� ������ �����, ���� ����� ����
}