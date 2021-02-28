#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float const Pi = 3.1415;

int main()
{
	float x = 0, y = 0, r = 0, P = 0, S = 0;
	setlocale(LC_ALL, "Russian");

	printf_s("Введите значения\n");
	scanf_s("%f", &x);
	scanf_s("%f", &y);
	scanf_s("%f", &r);

	P = 2 * Pi * r;
	S = Pi * r * r;

	printf_s("P = %f\n", P);
	printf_s("S = %f\n", S);
}