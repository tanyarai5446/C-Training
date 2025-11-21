#include<stdio.h>
//sum of array elements
int main()
{
    int a[6];
    int sum=0;
    printf("array elements");
    for(int i=0;i<6;i++)
    {
     scanf("%d",&a[i]);
    }
    for(int j=0;j<6;j++)
    {
     sum+=a[j];
    }
    printf("Sum of array elements:%d",sum);
    return 0;
}      