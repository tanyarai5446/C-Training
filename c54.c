#include<stdio.h>
//bubble sort
int main(){
    int a[5],i,n;
    n= sizeof(a)/sizeof(a[0]);
    printf("Enter 5 elements of array\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Array is\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    //int min=a[0];
    for(i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }    
    printf("\nArray in ascending order is\n");
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
    return 0;
}