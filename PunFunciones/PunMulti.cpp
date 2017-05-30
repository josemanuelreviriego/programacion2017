#include <stdio.h>
#include <stdlib.h>

#define MUL operadores[0]
#define RES operadores[1]


int mul(int op1, int op2){return op1 * op2;}
int resto(int op1, int op2){return op1 % op2;}

int main(int argc, char const *argv[])
{
	char user;
	int a = 12, b = 5;
	int (*p)(int, int);
        char operadores[]={'*', '/'};

	printf("multiplica (s/n): ");
	scanf(" %c", &user);

	if (user == 's'){
            p = mul;
        printf("%i %c %i = %i \n", a, MUL, b, p(a,b));
}
        else{
            p = resto;

	printf("%i %c %i = %i \n", a, RES, b, p(a,b));
        }
	return EXIT_SUCCESS;
}
