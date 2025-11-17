//find greatest among two numbers
#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(i>j)
         printf("%d is greatest",i);
    else
    {
        if(i==j)
         printf("i and j are equal = %d",i);
        else 
         printf("%d is greatest",j);
    } 
    return 0;
}