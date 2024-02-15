#include <stdio.h>

int main() {
    char s1[100], s2[100], output[200];
    int i, j, len1, len2;

    // Input the strings
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    // Find the lengths of the strings
    len1 = 0;
    while (s1[len1] != '\0') {
        ++len1;
    }
    len2 = 0;
    while (s2[len2] != '\0') {
        ++len2;
    }

    // Check if the last character of s1 equals the first character of s2
    if (s1[len1 - 1] == s2[0]) {
        // Combine the strings without repeating the common character
        for (i = 0; i < len1; ++i) {
            output[i] = s1[i];
        }
        for (j = 1; j < len2; ++j) {
            output[i++] = s2[j];
        }
        output[i] = '\0';
    } else {
        // Concatenate the strings as usual
        for (i = 0; i < len1; ++i) {
            output[i] = s1[i];
        }
        for (j = 0; j < len2; ++j) {
            output[i++] = s2[j];
        }
        output[i] = '\0';
    }

    printf("Output: %s\n", output);

    return 0;
}
