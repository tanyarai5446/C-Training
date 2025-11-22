#include<stdio.h>
//merging two arrays
int main()
{
      int n;printf("array size pls:");scanf("%d",&n);
      int m;printf("2nd array size pls:");scanf("%d",&m);
      int a[n],b[m],c[m+n];
      for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
      for(int i=0;i<m;i++)
       scanf("%d",&b[i]);
      for(int k=0;k<n;k++)
       c[k]=a[k];
      for(int x=0;x<m;x++)
       c[x+n]=b[x];
      for(int i=0;i<m+n;i++)
        printf("%d ",c[i]);
      return 0;   
}