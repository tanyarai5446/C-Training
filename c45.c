//max sum of subarray with size
#include<stdio.h>
//#include<limits.h>//to
int maxarraysum(int a[],int n,int k){
    int maxsum=0;
    
    for(int i=0;i<n;i++){
        int currsum=0;
    for(int j=i;j<n;j++)
    {
        currsum+=a[j]; 
        if(currsum>maxsum)
        maxsum=currsum;
    } 
    
    }
    return maxsum;

}
int main(){
    int a[7]={1,2,-4,-5,4,3,7},max,i,j,k,n;
    n= sizeof(a)/sizeof(a[0]);
    int data = maxarraysum(a,n,k);

    printf("Maximum sum of %d consecutive elements is %d",k,data); 
    
}