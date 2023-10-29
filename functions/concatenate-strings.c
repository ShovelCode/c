#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* concatenateStrings(const char *str1, const char *str2) {
    // Determine the length of the two strings
    size_t len1 = strlen(str1);
    size_t len2 = strlen(str2);

    // Allocate memory for the concatenated string
    // +1 for the null-terminator
    char *result = (char*) malloc(len1 + len2 + 1);

    // Check for memory allocation failure
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    // Copy the first string into the result
    strcpy(result, str1);

    // Append the second string to the result
    strcat(result, str2);

    return result;
}

int main() {
    const char *string1 = "Hello, ";
    const char *string2 = "world!";
    char *concatenated = concatenateStrings(string1, string2);

    printf("Concatenated string: %s\n", concatenated);

    // Free the memory allocated for the concatenated string
    free(concatenated);

    return 0;
}
