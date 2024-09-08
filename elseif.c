#include <stdio.h>

int main() {
    int nilai = 9; // Deklarasi dan inisialisasi nilai
    
    if (nilai >= 80) {
        printf("Nilai A\n");
    } else if (nilai >= 70) {
        printf("Nilai B\n");
    } else if (nilai >= 60) {
        printf("Nilai C\n");
    } else {
        printf("Nilai Mengkhawatirkan :(\n"); // Memperbaiki tanda kurung
    }
    
    return 0;
}
