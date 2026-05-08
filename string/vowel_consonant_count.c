#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {

        char ch = str[i];

        // Convert uppercase to lowercase manually
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {

            vowels++;
        }

        // Check consonant
        else if (ch >= 'a' && ch <= 'z') {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
