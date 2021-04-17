#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float vektor(float a1, float a2, float b1, float b2) {
	float v;
	v = a1 * b2 - b1 * a2;
	return v;
}
int main() {
	setlocale(LC_ALL, "Rus");
	float a1, a2, b1, b2, v1, v2, v3, v4;
	float x, y, x1, y1, x2, y2, x3, y3, x4, y4;
	printf(" Ввведите первую и вторую точки первого отрезка:\n");
	scanf_s("%f%f%f%f", &x1, &y1, &x2, &y2);
	printf("\n Ввведите первую и вторую точки второго отрезка:\n");
	scanf_s("%f%f%f%f", &x3, &y3, &x4, &y4);
	v1 = vektor(x4 - x3, y4 - y3, x1 - x3, y1 - y3);
	v2 = vektor(x4 - x3, y4 - y3, x2 - x3, y2 - y3);
	v3 = vektor(x2 - x1, y2 - y1, x3 - x1, y3 - y1);
	v4 = vektor(x2 - x1, y2 - y1, x4 - x1, y4 - y1);
	if ((v1 * v2 <= 0) && (v3 * v4 <= 0))
		printf(" Отрезки пересекаются.");
	else
		printf(" Отрезки не пересекаются.");
	return 0;
}
