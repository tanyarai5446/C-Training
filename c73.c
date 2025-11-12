#include<stdio.h>
#include<string.h>
int main(){
    char s[100],s2[100],str[100];
    int i,flag=1;
    
    fgets(s,100,stdin);
    int l=strlen(s);
    for(i=0;s[i]!='\0';i++)
    {
        str[i]=s[i];
    }
    for(i=0;str[l-1]=str[l-1]/10;i++)
    {
        char ld=s[l-1]/10;
        s2[i]=ld;
    }
    printf("%s",s2);
for(i=0;s2[i]!='\0';i++)
{
    if(s2[i]!=str[i]){
    flag=0;
    break;}
}
if(flag==1)
printf("palindrome");
else
printf("not a palindrome");
}