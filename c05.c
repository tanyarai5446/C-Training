//simple calculator using if else
#include<stdio.h>
int main()
{
    float a,b; int ch;
    float x;
    printf("enter 1st number: ");
    scanf("%f", &a);
    fflush(stdin); // optional, compiler-specific

    printf("enter 2nd number: ");
    scanf("%f", &b);
    fflush(stdin); // optional, compiler-specific

    x=(float)(a/b);
    printf("1-->add\n2--.subtract\n3-->multiply\n4-->divide\nenter your choice: ");
    scanf("%d", &ch);
    fflush(stdin); // optional, compiler-specific

    if(ch==1)
     printf("addition=%f",a + b);
    else if(ch==2) 
     printf("subtraction=%f",a - b);
    else if(ch==3) 
     printf("multiplication=%f",a * b);
    else if(ch==4)
     printf("division=%f",x);
    else
     printf("inavlid choice");
    return 0;
}