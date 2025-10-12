#include <stdio.h>
// Password validation without using string functions
int main() {
    char password[100];
    int i = 0, length = 0;
    int hasUpper = 0, hasLower = 0, hasDigit = 0;

    printf("Enter password: ");
    scanf("%s", password);

    while (password[i] != '\0') {
        char ch = password[i];

        // Count length
        length++;

        // Check uppercase
        if (ch >= 'A' && ch <= 'Z') {
            hasUpper = 1;
        }

        // Check lowercase
        if (ch >= 'a' && ch <= 'z') {
            hasLower = 1;
        }

        // Check digit
        if (ch >= '0' && ch <= '9') {
            hasDigit = 1;
        }

        i++;
    }

    if (length < 8) {
        printf("Password too short. Minimum 8 characters required.\n");
    } else if (hasUpper && hasLower && hasDigit) {
        printf("Password is valid.\n");
    } else {
        printf("Password must include uppercase, lowercase, and digits.\n");
    }

    return 0;
}