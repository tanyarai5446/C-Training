//recursion
#include<stdio.h>
int arraySUM(int a[],int n)
{   
    if(n<=0)
    return 0;
    return a[n-1]+arraySUM(a,n-1);
}
int power(int b,int p)
{
  if(p==0)
  return 1;
  else if(p==1)
  return b;
  return b*power(b,p-1);
}
int fabonacci(int a)
{
    if(a==1)//1st fabonacci no
    return 0;
    else if(a==2)//2nd fabonacci no
    return 1;
    else 
    return fabonacci(a-1)+fabonacci(a-2);
}
int fact(int a)
{
    if(a==1)
    {
        return 1;                        
    }
    return a*(a-1);
}
int sum2(int a)
{
    if(a==0)
    return 0;
    return a+sum2(a-1);
}
void sum(int a)
{   
    if(a==0)
    {
        return ;
    }
    sum(a-1);
    printf("%d ",a);
}
int main()
{   
    sum(5);
    int data =sum2(5);
    printf("\n%d ",data);
    printf("\n%d\n",fact(3));
    
    for(int i=1;i<=10;i++)
    {                                         
        printf("%d ",fabonacci(i));
    }
    int a[3]={3,2,4};
    int n=3;
    printf("\n%d",arraySUM(a,n));
    printf("\n%d",power(2,3));
}
