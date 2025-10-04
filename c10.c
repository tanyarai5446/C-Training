//currency conversion
#include<stdio.h>
int main()
{
    float curr;int ch;
    float x;
    printf("enter currency in indian rupees");
    scanf("%f",&curr);
    printf("1-->dollar conversion\n2-->pound conversion\n3-->yen conversion\n4-->baht conversion\n5-->yuan conversion\nenter your choice");
    scanf("%d",&ch);

    switch(ch){
        case 1:x=(float)(curr/87.85);
               printf("%.2f to dollar =%.4f",curr,x);
               break;
        case 2:x=(float)(curr/118.60);
               printf("%.2f to pound =%.4f",curr,x);
               break;
        case 3:x=(float)(curr/0.6);
               printf("%.2f to yen =%.4f",curr,x);
               break;
        case 4:x=(float)(curr/2.72);
               printf("%.2f to baht =%.4f",curr,x);
               break;
        case 5:x=(float)(curr/12.29);
               printf("%.2f to chinese yuan =%.4f",curr,x);
               break;       
        default:printf("invalid choice");

    }
    return 0;
}