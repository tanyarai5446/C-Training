//finding missing no. using xor
#include<stdio.h>
int main()
{
   int a[4]={1,2,3,4};
   int total=0;
   int sum=0;
   for(int i=0;i<4;i++)
   {  
      total^=a[i];
   }
   for(int i=1;i<=5;i++)
   {
     sum^=i;
   }
   printf("%d",sum^total);
}