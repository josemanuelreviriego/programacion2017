#include <stdio.h>
#include <stdlib.h>

int mul(int op1, int op2){return op1 * op2;}
int resto(int op1, int op2){return op1 % op2;}

int main(int argc, char const *argv[])
{
	char user;
	int a = 12, b = 5;
	int (*p)(int, int);

        p = resto;

	printf("multiplica (s/n): ");
	scanf(" %c", &user);

	if (user == 's')
            p = mul;

		printf("%i * %i = %i \n", a, b, p(a,b));

            p = &resto;

	printf("%i / %i = %i \n", a, b, p(a,b));

	return EXIT_SUCCESS;
}
