#include<stdio.h>
#include<string.h>
//string duplicate count using frequency array using ascii values
int main()
{
    char str[]="hijgtyjkinjk";
    int freq[256]={0};
    int ln=strlen(str);
    for(int i=0;i<ln;i++)
    {
        freq[str[i]]++;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]>0)
        {
            printf("%c : %d times\n",i,freq[i]);      
        }
    }
}