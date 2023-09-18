
#include <iostream>

int main()
{
	int ancho, altura, area;

	printf("Ancho:");
	scanf_s("%i", &ancho);
	printf("Altura:");
	scanf_s("%i", &altura);

	area = ancho * altura;
	printf("Area: %i", area);
}

