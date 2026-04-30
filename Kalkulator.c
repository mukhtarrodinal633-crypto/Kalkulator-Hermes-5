#include <stdio.h>

float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float mul(float a, float b) {
    return a * b;
}
float div(float a, float b) {
    if (b == 0) {
        printf("Error: Tidak bisa dibagi dengan nol!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int pilihan;
    float x, y, hasil;

    printf("=== KALKULATOR SEDERHANA ===\n");
    printf("1. Penjumlahan (+)\n");
    printf("2. Pengurangan (-)\n");
    printf("3. Perkalian (*)\n");
    printf("4. Pembagian (/)\n");

    printf("Pilih operasi (1-4): ");
    scanf("%d", &pilihan);

    printf("Masukkan angka pertama: ");
    scanf("%f", &x);

    printf("Masukkan angka kedua: ");
    scanf("%f", &y);

    switch(pilihan) {
        case 1:
            hasil = add(x, y);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 2:
            hasil = sub(x, y);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 3:
            hasil = mul(x, y);
            printf("Hasil: %.2f\n", hasil);
            break;
        case 4:
            hasil = div(x, y);
            if (y != 0)
                printf("Hasil: %.2f\n", hasil);
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}
