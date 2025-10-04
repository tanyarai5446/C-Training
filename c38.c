//palindrome array
#include<stdio.h>
int main(){
    int a[5]={1,2,3,2,1},isp=1;
    for(int i=0,j=4;i<5;i++,j--){
    
            if(a[i]!=a[j]){
               isp=0;
               break;}
                } 
             if(isp==0){printf(" not palindrome");}
            else {printf("palindrome");}
            }
/*#include<stdio.h>
int main()
{
    int a[7];int i,j;
    printf("array elements");

    for( j=0;j<7;j++)
     scanf("%d",&a[j]);
    for( i=0;i<3;i++)
      if(a[i]!=a[7-i-1])
       break;
    if(i<3)
     printf("array not palindromic");
    else
     printf("array is palindromic");
    return 0;
}          */        