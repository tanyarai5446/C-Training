//simple calculator using switch case
#include<stdio.h>
int main()
{
    float a,b;int ch;
    float x;
    printf("enter 1st number");
    scanf("%f",&a);
    printf("enter 2nd number");
    scanf("%f",&b);
    x=(float)(a/b);
    printf("1-->add\n2--.subtract\n3-->multiply\n4-->divide\nenter your choice");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("addition=%f",a+b);
               break;
        case 2:printf("subtraction=%f",a-b);
               break;       
        case 3: printf("multiplication=%f",a*b);
                break;
        case 4:if(b==0)
                 printf("result is not defined");
               else{
                printf("division=%.2f",x);
               }
               break;
        default:printf("inalid choice");
    }
    return 0;

}