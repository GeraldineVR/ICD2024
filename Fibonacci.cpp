#include <stdio.h>

void fibonacci(int terms) {
    int first = 0, second = 1, next;

    printf("Secuencia de Fibonacci:\n");

    for (int i = 0; i < terms; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main() {
    int terms;
    printf("Ingrese el número de términos de la secuencia de Fibonacci: ");
    scanf("%d", &terms);

    fibonacci(terms);

    return 0;
}

