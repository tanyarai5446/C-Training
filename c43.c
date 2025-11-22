//max sum of k consecutive elements in an array -optimized using window slinding
//even odd count
#include<stdio.h>//to minimize time complexity
int maxarraysum(int a[],int n,int k){
    int winsum=0;
    for(int i=0;i<k;i++){
        winsum+=a[i];}
    int maxsum=winsum;
    for(int j=k;j<n;j++)
    {
        winsum+=a[j]-a[j-k];
        if(winsum>maxsum){
        maxsum=winsum;}
    }
    return maxsum;
}

int main()
{
    int a[7]={1,2,-4,-5,4,3,7},max,i,j,k=3,n;
   int count=0,odd=0;
    n= sizeof(a)/sizeof(a[0]);
    int data = maxarraysum(a,n,k);
    printf("Maximum sum of %d consecutive elements is %d",k,data); 
    for(int l=k+1,maxsum;l<n;l++){ 
        if(a[l]%2==0){
        count++;}
    else{ odd++;}}
        printf("\ncount of even numbers is %d",count);
        printf("\ncount of odd numbers is %d",odd);
}
