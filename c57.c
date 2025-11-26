#include<stdio.h>
//swap two numbers using call by reference
void swap(int *p1,int *p2)
{
    int temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int a ,b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("Number afer swapping =%d & %d",a,b);
    return 0;
}