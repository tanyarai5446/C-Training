#include<stdio.h>
//array pointer
int main()
{
    int n;printf("enter sizeof array:");scanf("%d",&n);
    int a[n];int *p;
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    p=a;
    for(int i=0;i<n;i++)
    {
     printf("%d ",*p);
     p++;
    }  
    return 0;
}