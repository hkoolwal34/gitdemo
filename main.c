#include<stdio.h>
#include "add.c"
#include "sub.c"
int main()
{
	int sum = add();
	printf("%d\n",sum);
	
	int diff = sub(10,5);
	printf("%d\n",diff);
	

	return 0;
}

