#include<stdio.h>
//max sum of two elements in an array
int main()
{
    int a[6];int i,j;
    printf("array elements"); 
    for(int i=0;i<6;i++)
     scanf("%d",&a[i]);
    int max=0;
    for(i=0;i<5;i++)
     for( j=i+1;j<6;j++)
      if((a[i]+a[j])>max)
       max=a[i]+a[j];
    printf("maximum sum of array elements=%d and present at index %d & %d",max,i-1,j-1);
    return 0;
}