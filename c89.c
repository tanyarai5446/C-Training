//malloc,calloc,etc
#include<stdio.h>
#include<stdlib.h>
int main()
{   //malloc be default garbage value
    //calloc by default stores 0
    //free to free the extra space in array left unused
    //relloc
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    int *arr=(int *)calloc(n,sizeof(int));
    //int newSize;
    //scanf("%d",&newSize);
    //arr=(int *)realloc(arr, newSize * sizeof(int))
    printf("enetr %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    free(arr);
}