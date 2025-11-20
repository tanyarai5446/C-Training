#include<stdio.h>
// Program to print a diamond pattern
int main()
{
    int n;
    printf("enter number of rows:");
    scanf("%d",&n);
    // Upper triangle
    for(int i=0;i<n;i++)
    {
        for(int k=n-1;k>i;k--)
            printf(" ");
        for(int j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
    }
    // Lower triangle
    for(int i=n-2;i>=0;i--)
    {
        for(int k=n-1;k>i;k--)
            printf(" ");
        for(int j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}