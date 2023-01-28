#include <ctype.h>
#include <stdio.h>
#include <string.h>

void reverse_capitalization(char *str) {
    for (int i = 0; i < strlen(str); i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}
