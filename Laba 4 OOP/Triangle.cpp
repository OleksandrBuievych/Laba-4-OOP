#include"Triangle.h" 
#include <iostream> 
#include<typeinfo>

using namespace std;



Triangle Triangle::Init(float valuea, float valueb, float valuec)
{
	Triangle tmp;
	tmp.a = valuea;
	tmp.b = valueb;
	tmp.c = valuec;
	return tmp;

}

Triangle Triangle::Read()

{
	cout << "Введіть довжину сторони а" << endl;
	cin >> a;
	cout << "Введіть довжину сторони b" << endl;
	cin >> b;
	cout << "Введіть довжину сторони c" << endl;
	cin >> c;
	return Triangle();

}

float Triangle::Perymetr()

{
	return a + b + c;
}

float Triangle::Ploscha()
{
	if (a == b && b == c) {
		cout << "Трикутник рівносторонній, S = ";
		return ((a * a) * sqrt(3)) / 4;
	}

	else if (a == b || b == c || a == c) {

		cout << "Трикутник рівнобедрений, S = ";
		return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));
	}
	else {
		cout << "S = ";
		return sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c));
	}
}

void Triangle::Display()

{
	cout << "Сторона а = " << a << endl;
	cout << "Сторона b = " << b << endl;
	cout << "Сторона с = " << c << endl;
	cout << "Периметр P = " << Perymetr() << endl;
	cout << Ploscha() << endl;
	cout << "Kyt A = " << acos((a * a + b * b - c * c) / (2 * a * b)) * 180 / 3.14 << endl;
	cout << "Kyt B = " << acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / 3.14 << endl;
	cout << "Kyt C = " << acos((c * c + a * a - b * b) / (2 * c * a)) * 180 / 3.14 << endl;
}

char Triangle::toString()

{
	cout << a << "\t " << b << "\t " << c << endl;
	return 0;

}

Triangle Triangle::operator+(int other) const {
	return Triangle(a + other, b + other, c + other);
}
Triangle Triangle::operator+(const Triangle& other) const {
	return Triangle(a + other.a, b + other.b, c + other.c);
}
Triangle operator-(const Triangle& triangle1, const Triangle& triangle2) {
	return Triangle(triangle1.a - triangle2.a, triangle1.b - triangle2.b, triangle1.c - triangle2.c);
}
Triangle operator-(const Triangle& triangle1, int number) {
	return Triangle(triangle1.a - number, triangle1.b - number, triangle1.c - number);
}
Triangle operator-(int number, const Triangle& triangle1) {
	return Triangle(number - triangle1.a, number - triangle1.b, number - triangle1.c);
}