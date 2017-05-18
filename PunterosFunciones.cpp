#include <stdio.h>
#include <stdin.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int op1; //un numero entero
	int A[N]; // un array de enteros A con N numero de celdas
	int *p; // un puntero a un entero
	int suma(int op1, int op2); // una funcion suma que devuelve un entero y recibe dos enteros por parametro
	int *suma(int op1, int op2); // una funcion que devuelve un puntero a un entero
	int (*operacion)(int op1, int op2); // un puntero a una funcion
	//int suma(int op1, int op2)[] MO SE PUEDE EN C
	int (suma[])(int op1, int op2); // Array de funciones
	int (*operacion[])(int op1, int op2); // Array de puntero a funciones



	return EXIT_SUCCESS;
}