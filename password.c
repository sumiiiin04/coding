#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pw[50];
    int upper = 0, lower = 0, digit = 0;

    printf("Password: ");
    scanf("%s", pw);

    for (int i = 0; i < strlen(pw); i++) {
        if (isupper(pw[i]))
            upper = 1;
        else if (islower(pw[i]))
            lower = 1;
        else if (isdigit(pw[i]))
            digit = 1;
    }

    if (strlen(pw) >= 8 && upper && lower && digit)
        printf("Strong Password\n");
    else
        printf("Weak Password\n");

    return 0;
}
