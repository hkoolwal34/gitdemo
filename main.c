#include<stdio.h>
#include "add.c"
#include "sub.c"
#include "mul.c"
#include "pow.c"

int main(
{
	int sum = add();
	printf("%d\n",sum);
	
	int diff = sub(10,5);
	printf("%d\n",diff);
	
	int factorial = fact(5);
	printf("%d\n",factorial);

	int powers = power();
	printf("%d\n",powers);

	return 0;
}

