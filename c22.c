#include<stdio.h>
//pattern printing hollow inverted pyramid
int main()
{
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     for(int k=0;k<i;k++)
      printf(" ");
     for(int j=0;j<2*n-1-2*i;j++)
     { 
      if(j==0 ||j==2*n-2-2*i)
      printf("*");
      else
      printf(" ");
     } 
     printf("\n");
    } 
    return 0;    
} 