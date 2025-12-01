#include<stdio.h>
#include<string.h>
//program to find nth smallest number in an array
int main()
{
    int arr[]={4,5,1,0,7,8};
    for(int i=0;i<6;i++)
    {
        int temp=0;
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int n;
    printf("enter a number: \n");
    scanf("%d",&n);
    printf("%d smallest  no is %d",n,arr[6-n]);//or use arr[n-1] for nth smallest and use >sign
}