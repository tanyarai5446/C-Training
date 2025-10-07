#include<stdio.h>
#include<string.h>
//characters that occurred only once in a string
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
            
        for(int j=i+1;j<len-1;j++)
        {
        if(str[i]==str[j])
        {
            count++;
            str[j]='0';
         
        }
        }
        if(count>1)
        printf("\n%c is %d times",str[i],count);
        else{
        printf("\n%c is %d time",str[i],count);
        str2[k++]=str[i];
        }
        
       }
    }
    str2[k]='\0';
    printf("\ncharacters that occired only once are %s",str2);
} 