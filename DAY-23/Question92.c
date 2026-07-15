//Write a program to Find maximum occurring character in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i, max_freq = 0, max_char = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; i < strlen(str) - 1; i++) {
        freq[str[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (freq[i] > max_freq) {
            max_freq = freq[i];
            max_char = i;
        }
    }

    printf("Maximum occurring character is '%c' with frequency %d.\n", max_char, max_freq);
    return 0;
}