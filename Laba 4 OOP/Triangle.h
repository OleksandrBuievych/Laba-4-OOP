#pragma once
#include <iostream>

class Triangle {
	float a, b, c;
	double ka;
public:
	Triangle(float valuea, float valueb, float valuec) {
		a = valuea;
		b = valueb;
		c = valuec;
	};
	Triangle() {};
	Triangle(float valuea, double ka) {
		a = valuea;
		c = a / sin(ka / 57.3);
		b = c * cos(ka / 57.3);
	};
	Triangle Init(float a, float b, float c);
	Triangle Read();
	void Display();
	float Perymetr();
	float Ploscha();
	char toString();
	// Перевантаження операторів через методи
	Triangle operator+(int other) const;
	Triangle operator+(const Triangle& other) const;

	//Перевантаження операторів через функції
	friend Triangle operator-(const Triangle& triangle1, const Triangle& triangle2);
	friend Triangle operator-(const Triangle& triangle1, int number);
	friend Triangle operator-(int number, const Triangle& triangle1);

};