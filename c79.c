#include<stdio.h>
#include<string.h>
//substring palindrome check
int main()
{
    char str[100];
    fgets(str,100,stdin);
    int len = strlen(str);
    if(str[len-1] == '\n') 
    {
        str[len-1] = '\0';
        len--;
    }
    printf("string is %s\n", str);
    printf("length is %d\n", len);

    int found = 0;
    // Check all substrings
    for(int i=0; i<len; i++) 
    {
        for(int j=i+1; j<=len; j++) 
        {
            int left = i, right = j-1, isp = 1;
            while(left < right) 
            {
                if(str[left] != str[right]) 
                {
                    isp = 0;
                    break;
                }
                left++;
                right--;
            }
            if(isp && (j-i) > 1) 
            { // Only print substrings longer than 1
                found = 1;
                printf("Palindrome substring: ");
                for(int k=i; k<j; k++)
                    printf("%c", str[k]);
                printf("\n");
            }
        }
    }
    if(!found)
        printf("No palindrome substring found\n");
    return 0;
}