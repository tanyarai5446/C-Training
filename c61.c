#include<stdio.h>
//check two arrays are equal or not using pointers
int main()
{
     int n;printf("enter sizeof 1st array:");scanf("%d",&n);
     int m;printf("enter sizeof 2nd array:");scanf("%d",&m);
     int a[n],b[m],*p1=a,*p2=b,flag=0;
     if(sizeof(a)!=sizeof(b))
      printf("array not equal");
    else if(n==m)
     {
      printf("enter first array elements:");
     for(int i=0;i<n;i++)
      scanf("%d",&a[i]);
      printf("enter 2nd array elements:"); 
     for(int i=0;i<m;i++)
      scanf("%d",&b[i]);
      
     for(int i=0;i<n;i++)
      {
       if(*p1!=*p2){
        flag=1;
        break;}
       p1++;
       p2++; 
      }
      if(flag==1)
       printf("array not equal");
      else
       printf("array is equal");
     }
    
}