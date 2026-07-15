//Write a program to Reverse a string. 
#include <stdio.h>
#include <string.h>

void reverse_string(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    reverse_string(str);
    printf("Reversed string: %s", str);
    return 0;
}