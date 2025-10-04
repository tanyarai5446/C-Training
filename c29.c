#include<stdio.h>
//pattern printing lower right triangle
int main()
{
    int n,i,j,k;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    
     for(k=n-1;k>i;k--)
      printf(" ");
     for(j=0;j<=i;j++)
      printf("*");

     printf("\n"); }
    return 0;
     
}