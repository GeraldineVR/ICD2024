#include <stdio.h>

// Función para encontrar elementos comunes entre dos listas
void find_common_elements(int list1[], int size1, int list2[], int size2, int common[], int *common_size) {
    *common_size = 0;  // Inicializar el tamaño de la lista común

    // Iterar sobre cada elemento de la primera lista
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (list1[i] == list2[j]) {
                // Verificar si el elemento ya está en la lista común para evitar duplicados
                int already_in_common = 0;
                for (int k = 0; k < *common_size; k++) {
                    if (common[k] == list1[i]) {
                        already_in_common = 1;
                        break;
                    }
                }
                // Si no está en la lista común, lo agregamos
                if (!already_in_common) {
                    common[*common_size] = list1[i];
                    (*common_size)++;
                }
            }
        }
    }
}

int main() {
    int list1[] = {1, 2, 3, 4, 5};
    int list2[] = {3, 4, 5, 6, 7};
    int size1 = sizeof(list1) / sizeof(list1[0]);
    int size2 = sizeof(list2) / sizeof(list2[0]);
    int common[10];  // Arreglo para almacenar los elementos comunes
    int common_size;

    // Llamar a la función para encontrar elementos comunes
    find_common_elements(list1, size1, list2, size2, common, &common_size);

    // Imprimir los elementos comunes
    printf("Elementos comunes: ");
    for (int i = 0; i < common_size; i++) {
        printf("%d ", common[i]);
    }
    printf("\n");

    return 0;
}

