#include<stdio.h>
//pattern printing hour glass
int main()
{
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     for(int k=0;k<i;k++)
      printf(" ");
     for(int j=2*n-1;j>2*i;j--)
      printf("*");
     printf("\n");
    } 
    for(int i=1;i<n;i++){
     for(int k=n-1;k>i;k--)
      printf(" ");
     for(int j=0;j<2*i+1;j++)
      printf("*");
     printf("\n");
    } 
    return 0; 
}