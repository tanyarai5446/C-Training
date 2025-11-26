#include<stdio.h>
//count no .of even and odd elements in an array
int main()
{
    int a[6];
    int counte=0,counto=0;
    printf("array elements");
    for(int i=0;i<6;i++)
     scanf("%d",&a[i]);
    for(int j=0;j<6;j++)
     if(a[j]%2==0)
      counte++;
     else
      counto++;
    printf("no of even elements=%d\n no of odd elements=%d",counte,counto);    
    return 0;
}