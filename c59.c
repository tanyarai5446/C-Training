#include<stdio.h>
//reverse an array using pointers
int main()
{
    int n;printf("enter sizeof array:");scanf("%d",&n);
    int a[n];int *p;
    for(int i=0;i<n;i++)
     scanf("%d",&a[i]);
    p=&a[n-1];
    for(int i=n;i>0;i--){
     printf("%d ",*(p));
     p--;
    }   
    return 0;
}    