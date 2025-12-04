#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    // Remove trailing newline if present
    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    // Print the first initial
    if (isalpha(name[0])) {
        printf("%c.", toupper(name[0]));
    }

    // Print initials after spaces
    for (int i = 1; name[i] != '\0'; i++) {
        if (isspace(name[i]) && isalpha(name[i + 1])) {
            printf("%c.", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}