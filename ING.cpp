
#include <iostream>

int main()
{
	float base, altura, area;

	printf("Base:");
	scanf_s("%f", &base);
	printf("Altura:");
	scanf_s("%f", &altura);

	area = (base * altura) / 2.0;
	printf("El area es %.2f", area);
}

