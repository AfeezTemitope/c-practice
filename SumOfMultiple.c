#include <stdio.h>

int main() {
    int totalSum = 0;
    for (int i = 1; i <= 20000; i++) {
        if (i % 10 == 0) {
            totalSum += i;
        }
    }
    printf("The sum of multiples of 10 between 1 and 20,000 is: %d\n", totalSum);
    return 0;
}
