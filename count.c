#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle zero explicitly
    if (num == 0) {
        count = 1;
    } else {
        // Work with absolute value to handle negatives
        int temp = (num < 0) ? -num : num;

        while (temp > 0) {
            temp = temp / 10;  // Remove last digit
            count++;           // Increase digit count
        }
    }

    printf("Number of digits in %d is: %d\n", num, count);
    return 0;   
        
}