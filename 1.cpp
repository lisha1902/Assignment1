#include <stdio.h>

int countOnes(int num) {
    int count = 0;
    
    while (num > 0) {
        // Check if the least significant bit is 1
        count += num & 1;
        // Right shift the number by 1 to check the next bit
        num >>= 1;
    }
    
    return count;
}

int main() {
    int number;
    
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    int result = countOnes(number);
    printf("Number of 1's in the binary representation of %d is: %d\n", number, result);
    
    return 0;
}