
#include <iostream>

int main()
{
	float radio, pi, area;

	printf("Radio:");
	scanf_s("%f", &radio);

	pi = 3.14;
	area = pi * (radio * radio);
	printf("El area es %.2f", area);
}

