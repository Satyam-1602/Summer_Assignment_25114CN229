//Write a program to Convert lowercase to uppercase in a string.
#include <stdio.h>
void convert_to_uppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    convert_to_uppercase(str);
    printf("Uppercase string: %s", str);
    return 0;
}