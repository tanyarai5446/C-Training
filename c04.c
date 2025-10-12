// Password verification without using string functions
#include <stdio.h>

int main() {
    char correctPassword[] = "TrainSecure123";
    char input[100];
    int i = 0, match = 1;

    printf("Enter password: ");
    scanf("%s", input);

    // Compare character by character
    while (correctPassword[i] != '\0' && input[i] != '\0') {
        if (correctPassword[i] != input[i]) {
            match = 0;
            break;
        }
        i++;
    }

    // Check if both strings ended at the same time
    if (correctPassword[i] != '\0' || input[i] != '\0') {
        match = 0;
    }

    if (match) {
        printf("Access granted.\n");
    } else {
        printf("Access denied. Incorrect password.\n");
    }

    return 0;
}