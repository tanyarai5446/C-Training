//check whether a number is prime or not
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("enter a number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
         count++;

    }
    if(count==2)
     printf("Number is prime");
    else 
     printf("Number isn't prime");
    return 0; 
}