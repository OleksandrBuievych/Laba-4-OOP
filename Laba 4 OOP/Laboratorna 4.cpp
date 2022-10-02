#include "Triangle.h" 
#include <iostream> 
#include <Windows.h>//Для української мови у консолі 
using namespace std;



int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Triangle ABC(8, 5, 7);//Створюємо клас АВС 
	//ABC = ABC.Init(3, 5, 3);//Ініціалізуємо поля 
	//ABC.Read(); 
	cout << "Трикутник АВС" << endl;
	ABC.Display();//Виведення на екран 
	ABC.toString();//Виведення полів класу у рядок 
	Triangle BCA;
	BCA = BCA.Init(3, 4, 5);
	Triangle CAB(3, 60);
	cout << "Трикутник САВ" << endl;
	CAB.Display();
	Triangle A = ABC + 30;
	cout << "A = ABC+30 = ";
	A.toString();//Перевіряємо роботу перевантаженого оператора +, для додавання цілого числа до сторін тр-ка
	Triangle B = ABC + CAB;
	cout << "B = ABC+CAB = ";
	B.toString();//Перевіряємо роботу перевантаженого оператора +, для суми сторін 2 трикутників
	Triangle C = ABC - BCA;
	cout << "C = ABC-BCA = ";
	C.toString();//Перевіряємо роботу перевантаженого оператора -, для різниці сторін 2 трикутників
	A = A - 30;
	cout << "A-30 = ";
	A.toString();//Перевіряємо роботу перевантаженого оператора -, для різниці сторін тр-ка та цілого числа, коли число справа
	B = 50 - B;
	cout << "50-B = ";
	B.toString();//Перевіряємо роботу перевантаженого оператора -, для різниці сторін тр-ка та цілого числа, коли число зліва
}