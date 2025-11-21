#include<stdio.h>
//shift left an array by one position
int main()
{
    int a[6];
    printf("array elements"); 
    for(int j=0;j<6;j++)
    scanf("%d",&a[j]);
    int i; int k=a[0];
    for( i=0;i<5;i++)
    {
     int temp=a[i];
     a[i]=a[i+1];
     a[i+1]=temp;
    } 
    a[i+1]=k;
    for(int i=0;i<6;i++)
     printf("%d ",a[i]); 
    return 0;
}      