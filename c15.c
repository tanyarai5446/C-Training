//print all prime numbers from 2 to n
#include<stdio.h>
int main()
{
    int n; 
    printf("enter a number:");
    scanf("%d",&n);
   
    printf("List of prime from 2 to %d is:\n",n);
    for(int i=2;i<=n;i++)
    {
        int count=0;
        for(int j=1;j<=i;j++)
        {
          if(i%j==0)
           count++;
        }
        if(count==2)
         printf("%d\n",i);
    }
 
    return 0;
}