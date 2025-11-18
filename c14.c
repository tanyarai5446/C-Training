//factorial of a number
#include<stdio.h>

int main()
{
   unsigned long long int fac=1;
   int n;
   scanf("%d",&n);
   for(int i=n;i>0;i--)
    fac*=i;
   printf("factorial of %d =%llu",n,fac);
   return 0;  
}