#include <stdio.h>

int main() {
    int input;

    // Prompt the user for input
    printf("Masukkan Input: ");
    scanf("%d", &input);  // Get input from the user

    switch (input) {
        case 1:
            printf("Senin\n");
            break;
        case 2:
            printf("Selasa\n");
            break;
        case 3:
            printf("Rabu\n");
            break;
        case 4:
            printf("Kamis\n");
            break;
        case 5:
            printf("Jumat\n");
            break;
        case 6:
            printf("Sabtu\n");
            break;
        case 7:
            printf("Minggu\n");
            break;
        case 8:
            printf("Ganyu\n"); // Extra case for fun!
            break;
        default:
            printf("Input Salah\n");
    }

    return 0;
}
