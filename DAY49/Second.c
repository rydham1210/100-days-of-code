#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    size_t len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') {
        name[len - 1] = '\0';
    }

    char *token = strtok(name, " ");
    char lastWord[50];
    int wordCount = 0;

    while (token != NULL) {
        wordCount++;
        strcpy(lastWord, token); 
        token = strtok(NULL, " ");
    }

    token = strtok(name, " ");
    for (int i = 0; i < wordCount - 1; i++) {
        printf("%c.", toupper(token[0]));
        token = strtok(NULL, " ");
    }

  
    printf("%s\n", lastWord);
    return 0;
}