#include<stdio.h>
//max and min element in an array

int max_of_array(int a[6])
{
    int max=a[0];
    for(int i=1;i<6;i++)
     if(a[i]>max)
      max=a[i];
    return max;
}
int min_of_array(int a[6])
{
    int min=a[0];
    for(int i=1;i<6;i++)
     if(a[i]<min)
      min=a[i];
    return min;
}
int main()
{
    int a[6];
    printf("array elements");
    for(int i=0;i<6;i++)
     scanf("%d",&a[i]);
    int k=max_of_array(a);
    int z=min_of_array(a);
    printf("max element=%d & min element=%d",k,z);
    return 0;
}    