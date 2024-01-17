#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[100];

    // Use %[^\n] to read the whole line
    scanf(" %[^\n]", text);

    int n = strlen(text);
    // Print the first character of the first word
    if (n > 0 && !isspace(text[0])) {
        printf("%c", text[0]);
    }
    // Print the first character of each word
    for (int i = 1; i < n; i++) {
        if (isspace(text[i - 1]) && !isspace(text[i])) {
            printf("%c", text[i]);
        }
    }
    return 0;
}