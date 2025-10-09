#include<stdio.h>
#include<string.h>
//string// Wap to short an string using bubble sort

int main()
{
    char str[] = "tanya";
    int len = strlen(str);
    char freq[256] = {0}; // frequency array for all ASCII characters

    // Count frequency of each character
    for (int i = 0; i < len; i++)
    {
        freq[str[i]]++;
    }

    printf("Original string: %s\n", str);
    printf("Sorted string: ");

    // Print characters in increasing ASCII order
    for (int i = 0; i < 256; i++)
    {
        while (freq[i] > 0)
        {
            printf("%c", i);
            freq[i]--;
        }
    }

    printf("\n");
    return 0;
}