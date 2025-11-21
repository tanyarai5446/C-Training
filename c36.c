#include<stdio.h>
//reverse an array
int main()
{
    int a[6];
    printf("array elements");
    for(int i=0;i<6;i++)
    scanf("%d",&a[i]);
    printf("array elements"); 
    for(int i=5;i>=0;i--)
    printf("%d ",a[i]);
    return 0;  
}