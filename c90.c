#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,k=0;
    printf("enter n: ");
    scanf("%d",&n);
    int *a=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    int c[n];
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        c[k++]=a[i];
    }
    int i=0;
    while(i<n){
        if(a[i]<0)
        c[k++]=a[i];
        i++;
    }
    for(i=0;i<n;i++)
    { 
        if(a[i]>0)
        c[k++]=a[i];
    }
    printf("rearranged array : {");
    for(int j=0;j<n;j++)
    {
        printf("%d",c[j]);
        if(j<n-1)
        printf(", ");
    }
    printf("}");
}