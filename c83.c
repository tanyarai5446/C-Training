// Wap to find whether a Sub-string is present in a string or not .

// Ex :-  "abcdabchs" find whether "abc" is present or not?
//  O/P :- Substring exists 
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="abcdabchs";
    char target[]="abd";
    int k=3;
    char a[k];
    int ln=0;
    int i,j,l,m;
    int count=0;

    for( i=0;i<str[i]!='\0';i++)
    {
        ln++;
    }
    for( i=0;i<ln-k;i++)
    {
        for(j=i,l=0;j<i+k;j++,l++)
        {
            a[l]=str[j];
        }
        for(m=0;m<k;m++)
        {
            if(target[m]!=a[m])
            {
                break;
            }
        }
        if(m==k)
        {
            count++;
            break;
        }
    }
    if(count>0)
    {
        printf("Substring exists");
    }
    else
    {
        printf("Substring does not exist");
    }
}