#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void generateFibonacci(int count) {
    int a = 0, b = 1, next;
    int sum = 0;
    int minVal = 0, maxVal = 1;

    printf("\nFibonacci series (%d terms):\n", count);

    for (int i = 1; i <= count; i++) {
        printf("%d ", a);
        sum += a;

        if (a < minVal) minVal = a;
        if (a > maxVal) maxVal = a;

        next = a + b;
        a = b;
        b = next;
    }

    float average = (float)sum / count;

    printf("\n\nSum: %d", sum);
    printf("\nAverage: %.2f", average);
    printf("\nMin: %d", minVal);
    printf("\nMax: %d\n", maxVal);
}

int main() {
    char input[10];
    int count;

    printf("Type 'start' to begin. Type 'exit' to quit.\n");

    while (1) {
        printf("\nEnter number of terms (or type 'exit'): ");
        scanf("%s", input);

        if (strcmp(input, "exit") == 0) {
            printf("Exiting the program.\n");
            break;
        }

        count = atoi(input);

        if (count <= 0) {
            printf("Please enter a valid positive number.\n");
        } else {
            generateFibonacci(count);
        }
    }

    return 0;
}
