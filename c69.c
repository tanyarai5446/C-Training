#include<stdio.h>
//2d array input and output
int main()
{
    int m,n;
    printf("Enter number of rows:");scanf("%d",&m);
    printf("Enter number of coloumn:");scanf("%d",&n);
    int a[m][n];
    printf("Enter elements of array:");
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
      printf("%d ",a[i][j]);}
        printf("\n");}
    return 0; 
}