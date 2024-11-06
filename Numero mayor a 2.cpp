#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo
bool is_prime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Función que implementa la conjetura de Goldbach
void goldbach(int n) {
    if (n <= 2 || n % 2 != 0) {
        printf("El numero debe ser un numero par mayor que 2.\n");
        return;
    }

    bool found_combination = false;
    for (int i = 2; i < n; i++) {
        if (is_prime(i) && is_prime(n - i)) {
            printf("%d + %d\n", i, n - i);
            found_combination = true;
        }
    }

    if (!found_combination) {
        printf("No se encontraron combinaciones.\n");
    }
}

// Programa principal para probar la función
int main() {
    int n;
    printf("Ingrese un número par mayor que 2: ");
    scanf("%d", &n);
    
    goldbach(n);

    return 0;
}

