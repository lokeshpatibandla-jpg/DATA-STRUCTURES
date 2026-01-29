#include <stdio.h>

int main() {
    char str[100];
    char *ptr;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    while (*ptr != '\0') {
        if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
            if (*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u'||
                *ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U')
                vowels++;
            else
                consonants++;
        }
        ptr++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d", consonants);

    return 0;
}
