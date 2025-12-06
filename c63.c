#include<stdio.h>
//sum of 2d array elements
int main()
{
    int m,n;
    printf("Enter number of rows:");
    scanf("%d",&m);
    printf("Enter number of coloumn:");
    scanf("%d",&n);
    int a[m][n];int sum=0;
    printf("Enter elements of array:");
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    for(int i=0;i<m;i++)
    {  
     for(int j=0;j<n;j++)
     {
        sum+=a[i][j];
     }
    } 
    printf("Sum of matrix elements=%d",sum);
    return 0;
}    