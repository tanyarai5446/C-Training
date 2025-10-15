//trapping water in between building
#include<stdio.h>
int main()
{
    int n,w=0;
    scanf("%d",&n);
    int a[n],left_max[n],right_max[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    left_max[0]=a[0];
    for(int i=1;i<n;i++)
    { 
      left_max[i]=(a[i] > left_max[i-1]) ? a[i] : left_max[i-1];
    }
    
    
    right_max[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        
        right_max[i]=(a[i]>right_max[i+1])? a[i] : right_max[i+1];
        
    }
    // for(int m=0;m<n;m++)
    // {
    //     printf("%d\t",left_max[m]);
    // }
    // printf("\n");
    // for(int i=0;i<n;i++)
    // {
    //     printf("%d\t",right_max[i]);
    // }
    for(int i=0;i<n;i++)
    {
        int min;
        if(left_max[i]<right_max[i])
        min=left_max[i];
        else
        min=right_max[i];
        w+=min-a[i];

    }
    printf("%d",w);
}
