//Write a program to Count vowels and consonants in a string.
#include <stdio.h>
void count_vowels_consonants(char str[], int *vowel_count, int *consonant_count) {
    *vowel_count = 0;
    *consonant_count = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                (*vowel_count)++;
            } else {
                (*consonant_count)++;
            }
        }
    }
}
int main() {
    char str[100];
    int vowel_count, consonant_count;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    count_vowels_consonants(str, &vowel_count, &consonant_count);
    
    printf("Number of vowels: %d\n", vowel_count);
    printf("Number of consonants: %d\n", consonant_count);
    
    return 0;
}