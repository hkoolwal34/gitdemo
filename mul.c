#include<stdio.h>

int mul()
{
       if(a<=1)
               return 1;
       return a*mul(a-1);
}
