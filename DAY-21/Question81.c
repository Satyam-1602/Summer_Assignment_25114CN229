//Write a program to Find string length without strlen(). 
#include <stdio.h>

int find_string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    int length = find_string_length(str);
    printf("Length of the string: %d\n", length);
    return 0;
}