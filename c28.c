#include<stdio.h>
//pattern printing upper left triangle
int main()
{
    int n,i,j;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=n;i>0;i--){
     for(j=0;j<i;j++)
      printf("*");
     printf("\n"); }
    return 0;
     
}