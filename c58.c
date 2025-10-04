#include<stdio.h>
//sum of two numbers using call by reference
int sum(int *x,int *y)
{
    *x=50;*y=50;
    int c=*x+*y;
    return c;
}
int main()
{
    int x,y;
    x=10;y=20;
    int c=sum(&x,&y);
    printf("%d\n",c);
    printf("%d",x+y);
    return 0;
}
