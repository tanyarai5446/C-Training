//pyramid pointing right
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter your rows:");
    scanf("%d",&n);
    for(int i=0;i<2*n-1;i++){
        int comp = n - abs(n-1-i);
        for(int j=0;j<comp;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}