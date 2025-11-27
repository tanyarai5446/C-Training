#include<stdio.h>
//transpose of a matrix
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
    printf("Transpose of matrix is:\n");
    for(int i=0;i<m;i++)
    {
     for(int j=0;j<n;j++)
      printf("%d ",a[j][i]);
     printf("\n");
    }  
    return 0;  
}