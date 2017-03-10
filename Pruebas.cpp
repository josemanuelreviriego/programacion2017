#include <stdlib.h>
#include <stdio.h>

#define N 20

struct TPolinomio
{
	double coeficiente[N];
	int grado;
};

int main(int argc, char const *argv[])
{
	/* code */
	struct TPolinomio polinomio;
	double potencia = 1;
	double resultado = 0;

	printf("Indica el grado: \n");
	scanf(" %i", &polinomio.grado);

	printf("Introduce los coeficientes: \n");
	for(int i=0; i <polinomio.grado; i++)
        scanf(" %lf", &polinomio.coeficiente[i]);

    printf("Dime el valor de x: \n");
    scanf(" %lf",&x);

    for(int j=0; j<=polinomio.grado; j++, potencia*=x)
        resultado += polinomio.coeficiente[j] * potencia;

    printf("Resultado es: %.2lf \n", resultado);

	return 0;
}