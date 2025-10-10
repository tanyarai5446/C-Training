#include<stdio.h>
//array intersection
int main()
{
    int n,m,k=0;
    printf("enter n: ");
    scanf("%d", &n);
    int a[n];
    for(int i =0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter m: ");
    scanf("%d", &m);
    int b[m],c[n+m];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i]==b[j]){
            printf("%d",a[i]);
            //c[k++]=a[i];
            //break;
        }
        else
        printf("no common element");goto a;
        }
        //printf("%d",c[i]);
    }
    // Print intersection
    //printf("Common elements: ");
    //for(int i = 0; i < k; i++)
      //  printf("%d ", c[i]);
    a:
    return 0;
}
    
    

