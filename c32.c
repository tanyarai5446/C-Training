#include<stdio.h>
//check if a number is a magic number or not (if last didgit after sum of digitd is 1 its a magic no.)
int magic_number(int a)
{
  int digit=1, sum = 0;
  while (a > 9)  // repeat until single digit
  {
        sum = 0;
        while (a > 0)
        {
            digit = a % 10;
            sum += digit;
            a /= 10;
        }
        a = sum;  // new number is the sum of digits
  }
  return a;
}
int main()
{
    int n;
    printf("Enter number to be checked: ");
    scanf("%d", &n);
    int a = n;
    int k=magic_number(a);
    

    if (k== 1)
        printf("Number is a magic number\n");
    else
        printf("Number is not a magic number\n");

    return 0;
}