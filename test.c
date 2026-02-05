#include<stdio.h>
#include<stdlib.h>

int main() {
    char s[50];
    printf("Hello, World!\n");
    // Read up to 49 chars (leave room for null) and stop at newline; leading space skips prior newline
    if (scanf(" %49[^\n]", s) == 1) {
        printf("%s\n", s);
    }
    return 0;
}