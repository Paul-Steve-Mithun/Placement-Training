#include <stdio.h>

// Function to check if a character is an alphabet or digit
int isAlphabetOrDigit(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

// Function to reverse the letters and numbers in a string
void reverseLettersAndNumbers(char* str) {
    int left = 0;
    int right = 0;
    while (str[right] != '\0') {
        right++;
    }
    right--;

    while (left < right) {
        // Skip non-alphabetic and non-digit characters
        while (left < right && !isAlphabetOrDigit(str[left])) {
            left++;
        }
        while (left < right && !isAlphabetOrDigit(str[right])) {
            right--;
        }

        // Swap the letters and numbers
        if (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]", input);

    reverseLettersAndNumbers(input);

    printf("Output: %s\n", input);

    return 0;
}
