#include <ctype.h>
#include <limits.h>
#include <string.h> //trabalha com strings
#include <stdio.h>  

int main(void) {
    size_t size = 30;
    char string_1[size];
    char string_2[size];

    printf("First string : ");
    fgets(string_1, size, stdin);

    printf("Second string : ");
    fgets(string_2, size, stdin);

    //STRING 1

    printf("The first string %s", string_1);

    size_t size_1 = strlen(string_1);
    printf("It has %lu characters\n", size_1);

    size_t num_alpha_chars = 0;
    for (size_t i = 0; i < size_1; i++) {
        if (isalpha(string_1[i])) {
            num_alpha_chars++;
        }
    }

    printf("Number of letters: %lu\n", num_alpha_chars);

}