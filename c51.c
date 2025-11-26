#include<stdio.h>
//linear search to count occurrences of an element in an array
int main()
{
    int a[6];
    int count=0,key;
    printf("element to be searched:");
    scanf("%d",&key);
    printf("array elements");
    for(int i=0;i<6;i++)
     scanf("%d",&a[i]);
    for(int j=0;j<6;j++)
     if(a[j]==key)
       count++;
    if(count>0)
     printf("element found %d times",count);
    else 
     printf("element not found");
    return 0;
}          