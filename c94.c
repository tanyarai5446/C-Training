//swap using xor
#include<stdio.h>
int main()
{
    int a=8;
    int b=9;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("a=%d b=%d",a,b);
}