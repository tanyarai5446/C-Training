#include<stdio.h>
#include<string.h>
//program to find nth largest number in an array
int main(){
    int arr[]={4,5,1,0,7,8};
    for(int i=0;i<6;i++)
    {
        int temp=0;
        for(int j=i+1;j<6;j++)
        {
            if(arr[i]>arr[j])
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
    printf("%d largest no is %d",n,arr[6-n]);
}