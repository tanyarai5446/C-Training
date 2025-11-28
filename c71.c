#include<stdio.h>
#include<string.h>
//string reverse
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int length=strlen(str);
    printf("length is %d",length-1);
    for(int i=length-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}