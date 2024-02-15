#include <stdio.h>

// Function to calculate the sum of digits
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int num;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int digitSum = sumOfDigits(num);
        int otherDigitSum = sumOfDigits(num / 10); // Remove the last digit

        // Check if the sums are equal
        if (digitSum == otherDigitSum) {
            printf("%d is a Cool number!\n", num);
        } else {
            printf("%d is not a Cool number.\n", num);
        }
    }

    return 0;
}
