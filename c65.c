#include<stdio.h>
//maximum and minimum element of 2d matrix using pointers
int max(int *p,int m,int n)
{
    int max=*p;
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
     {
      if(*p>max)
       max=*p;
      p++;
     } 
    return max;  

}
int min(int *p,int m,int n)
{ 
    int min=*p;
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
     {
      if(*p<min)
       min=*p;
      p++;
     } 
    return min;  
}
int main()
{
    int m,n;printf("Enter number of rows:");scanf("%d",&m);
    printf("Enter number of coloumn:");scanf("%d",&n);
    int a[m][n];
    printf("Enter elements of array:");
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      scanf("%d",&a[i][j]);
    int z=max(&a,m,n);
    int k=min(&a,m,n);
    printf("Maximum element of matrix=%d\nMinimum element of matrix=%d ",z,k);  
    return 0;
}