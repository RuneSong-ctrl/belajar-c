#include <stdio.h>
#include <stdlib.h> // Required for malloc and free

int main() {
    int banyakData;
    printf("Masukkan Banyak Data: ");
    scanf("%d", &banyakData);

    // Allocate memory dynamically for the array
    int *nilai = (int *)malloc(banyakData * sizeof(int));
    if (nilai == NULL) {
        printf("Memori tidak cukup untuk menampung data.\n");
        return 1; // Exit the program if memory allocation fails
    }

    // Input data
    for (int i = 0; i < banyakData; i++) {
        printf("Masukkan Data ke-%d : ", i + 1);
        scanf("%d", &nilai[i]);
    }

    // Output data
    for (int i = 0; i < banyakData; i++) {
        printf("Data ke-%d adalah: %d\n", i + 1, nilai[i]);
    }

    // Free dynamically allocated memory
    free(nilai);

    return 0;
}
