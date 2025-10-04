//check whether a number is palindrome or not
#include<stdio.h>
int main()
{
    int n,rev=0,digit=1;
    printf("enter a number:");
    scanf("%d",&n);
    int i=n;
    while(i>0)
    {
        digit=i%10;
        rev=(rev*10)+digit;
        i/=10;
    }
    if(rev==n)
     printf("Number is Palindrome");
    else
     printf("Number isn't Palindrome");
    return 0;

}