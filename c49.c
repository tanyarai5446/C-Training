#include<stdio.h>
//find pairs in an array whose sum is equal to k
int main()
{
    int a[7]={1,3,4,6,-5,5,1};
    int i,j,k=7;
    for(i=0;i<7;i++){
        for(j=i-1;j<7;j++)
    { 
        if(a[i]+a[j]==k)
        {
            printf("\n(%d,%d) at a[%d],a[%d]",a[i],a[j],i,j);
        }
    }   }
}