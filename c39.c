#include<stdio.h>
//count occurrences of an element in an array
int main()
{
    int a[6];int i,j;
    int k,count=0;
    printf("enter element to be checked for occurence");
    scanf("%d",&k);
    printf("array elements"); 
    for(i=0;i<6;i++)
     scanf("%d",&a[i]);
    for(j=0;j<6;j++)
     if(a[j]==k)
     count++;
    printf("element %d is occuring %d times",k,count);
    return 0;
}       