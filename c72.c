#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    printf("enter the 1st string\n");
    fgets(str1,100,stdin);
    
    int l=strlen(str1);
    printf("length is %d\n",l-1);
    
    printf("copied string is\n");
    for(int i=0;str1[i]!='\0';i++){
    str2[i]=str1[i];
    printf("%c",str2[i]);
    }
}
