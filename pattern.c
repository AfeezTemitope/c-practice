#include <stdio.h>

int main() {
    int userInput;
    printf("Enter a value: ");
    scanf("%d", &userInput);

    for (int i = userInput; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            scanf("%d", &j); 
        }
        printf("\n"); 
    }

    return 0;
}
