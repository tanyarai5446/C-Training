//sum of digits of a number
#include<stdio.h>
int main()
{
    int n,digit=1,sum=0;
    printf("enter a number:");
    scanf("%d",&n);
    int i=n;
    while(i>0)
    {
        digit=i%10;
        sum+=digit;
        i/=10;
    }
    printf("\nsum of digits=%d",sum);
    return 0;
}