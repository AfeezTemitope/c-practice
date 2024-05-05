#include <stdio.h>

int find_range(int numbers[], int size) {
    int maximum = numbers[0];
    int minimum = numbers[0];

    for (int i = 1; i < size; ++i) {
        if (numbers[i] > maximum) {
            maximum = numbers[i];
        }
        if (numbers[i] < minimum) {
            minimum = numbers[i];
        }
    }

    return maximum - minimum;
}

int main() {
    int badAfeez[] = {7, 4, 2, 3, 4};
    int size = sizeof(badAfeez) / sizeof(badAfeez[0]);

    int result = find_range(badAfeez, size);
    printf("%d\n", result);

    return 0;
}
