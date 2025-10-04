#include<stdio.h>
//pyramid pointing left
int main()
{
    int n,i,j,k;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    
     for(k=n;k>i;k--)
      printf(" ");
     for(j=0;j<=i;j++)
      printf("*");

     printf("\n"); }
    for(int i=0;i<n+1;i++)
     printf("*");
    printf("\n");

    for(i=0;i<n;i++){
    
     for(k=0;k<i+1;k++)
      printf(" ");
     for(j=n;j>i;j--)
      printf("*");

     printf("\n"); } 
    return 0;
     
}