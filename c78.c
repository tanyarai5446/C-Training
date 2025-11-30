#include<stdio.h>
#include<string.h>
//anagram check
int main()
{
    int check=0;
    char str1[50],str2[50];
    fgets(str1,50,stdin);
    printf("1st string is %s",str1);
    fgets(str2,50,stdin);
    printf("2nd string is %s",str2);
    int len1=strlen(str1);
    printf("length of 1st is %d\n",len1);
    int len2=strlen(str2);
    printf("length of 2nd is %d\n",len2);
    if(len1!=len2)
    {
        printf("not anagram");
        return 0;
    }
    else
    {
    for(int i=0;i<len1-1;i++)
    {   
        if(str1[i]!='0' && str1[i]!=' ')
        {
        for(int j=0;j<len1-1;j++)
        {   
            if(str1[i]==str2[j])
            {
                check++;
                str2[j]='0';
            }
            else
            {
                continue;
            }
        }
        }
    }
        if(check==(len1-1))
        {
            printf("anagram");
        }
        else
        {
            printf("not anagram");
    
        }
    }
}