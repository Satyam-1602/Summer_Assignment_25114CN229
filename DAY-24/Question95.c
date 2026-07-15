//Write a program to Find longest word. 
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    char *longestWord = strtok(str, " ");
    char *currentWord;
    while ((currentWord = strtok(NULL, " ")) != NULL) {
        if (strlen(currentWord) > strlen(longestWord)) {
            longestWord = currentWord;
        }
    }
    printf("Longest word: %s\n", longestWord);
    return 0;
}