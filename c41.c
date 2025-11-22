#include<stdio.h>
//merging two arrays alternatively
int main()
{
    int a[3]={1,2,3};
    int b[3]={4,5,6};
    int c[6];
    for(int i=0,j=0;i<3;i++,j=j+2)
    {  
        
        c[j]=a[i];
        c[j+1]=b[i]; 
        printf("%d %d ",c[j],c[j+1]);
    }
}