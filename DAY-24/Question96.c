//Write a program to Remove duplicate characters from a string.
#include <stdio.h>
#include <string.h>

void removeDuplicates(char *str) {
    int len = strlen(str);
    if (len == 0) return;

    char unique[200];
    int index = 0;
    int visited[256] = {0}; 

    for (int i = 0; i < len; i++) {
        if (!visited[(unsigned char)str[i]]) {
            visited[(unsigned char)str[i]] = 1;
            unique[index++] = str[i];
        }
    }
    unique[index] = '\0';
    strcpy(str, unique);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    removeDuplicates(str);
    printf("String after removing duplicates: %s\n", str);
    return 0;
}