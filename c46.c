#include<stdio.h>
//kadane's algorithm(max sum subarray without size)
int main()
{
   int arr[5]={1,-2,3,-4,6};
    int maxsum=arr[0];
    int cursum=arr[0];
    for(int i=1; i<5;i++)
    {
        if(cursum<0)
        {
            cursum=arr[i];
        }
        else
        cursum=cursum+arr[i];
        if(cursum>maxsum)
        {
            maxsum=cursum;
        }
    }
    printf("%d",maxsum);
}