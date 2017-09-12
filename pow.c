#include<stdio.h>
#include<math.h>
int power()
{
	int a=10,b=2;
	int i;
	int powers=1;
	for(i=0;i<b;i++)
	{
		powers*=a;
	}

	return powers;
}
