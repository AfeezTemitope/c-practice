#include <stdio.h>

int main() {
    int numbers[] = {2, 4, 5, 1, 6};
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

        for (int i = 0; i < numbers.length; i++) {
            result[i] = sum - numbers[i];
        }

      printf("Result array: [");
        for (int i = 0; i < result.length; i++) {
            printf(result[i]);
            if (i < result.length - 1) {
                printf(", ");
            }
        }
        printf("]");
    return 0;
}
