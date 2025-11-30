#include<stdio.h>
#include<string.h>
//program to find max no of characters occuring in a string
int main(){
    char str[100];
    fgets(str,100,stdin);
    printf("string is %s",str);
    int ln=strlen(str);
    printf("length is %d\n",ln);
    int freq[256]={0};
    for(int i=0;i<ln-1;i++)
    {
        freq[str[i]]++;
    }
    int max=0;
    char result;
    for(int i=0;i<256;i++)
    {
        if(freq[i]>max)
        {
            max=freq[i];
            result=i;
        }
    }
    printf("max occurring char is %c with frequency %d",result,max);
}