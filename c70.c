#include<stdio.h>
//string basics
int main()
{
    char string[]="tanya";
    printf("%s",string);
    for(int i=0;string[i]!='\0';i++)
    {
        printf("\n%c",string[i]); 
    }
}