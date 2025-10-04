#include<stdio.h>
//inverted pyramid
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
    return 0; 
       
}