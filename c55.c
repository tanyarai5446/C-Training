//binary search
#include<stdio.h>
int main(){
    int a[5]={1,2,3,4,5},l=0,h=4,n;
    printf("enter the element to be searched");
    scanf("%d",&n);
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==n){
            printf("element found at %d",mid);
            return 0;
        }
        else if(a[mid]<n){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }printf("element not found");
}