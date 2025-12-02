#include<stdio.h>
//separate negative and positive no. in array
int main(){
    int i,j=0,n;
    printf("enter a no");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
            if(a[i]<0)
            {
                b[j++]=a[i];
            }
    }
    for(int i=0;i<n;i++){
        if(a[i]>0){
        b[j++]=a[i];}
        printf("%d\t",b[i]);
    }
}