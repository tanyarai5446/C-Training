// Wap to remove the space between "C Program"
// O/P :- Cprogram
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "C program";
    char result[100];
    int ln = strlen(str);
    int j = 0;

    for (int i = 0; i < ln; i++)
    {
        if (str[i] != ' ')
        {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("Original String : %s\n", str);
    printf("String after space is removed : %s\n", result);
}