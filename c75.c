#include<stdio.h>
#include<string.h>
//string duplicate remove
int main()
{
    char str[100];
    fgets(str,100,stdin);
    printf("string is %s",str);
    int k =0;
    int len=strlen(str);
    char str2[100];
    printf("length is %d",len);
    for(int i=0;i<len-1;i++)
    {
        int count=1;
        if(str[i]!='0'&& str[i]!=' ')
        {
            str2[k++]=str[i];
        for(int j=i+1;j<len-1;j++)
        {
        if(str[i]==str[j])
        {
            count++;
            str[j]='0'; 
        }
        }
        if(count>1){
        printf("\n%c is %d times",str[i],count);
        }
        else
        printf("\n%c is %d time",str[i],count);
        
       }
    }
    printf("\nstring after removing duplicates is %s",str2);
}