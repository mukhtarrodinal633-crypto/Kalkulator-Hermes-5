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
int main (){
    float a, b, hasil;
    char op;
    printf("Masukkan angka pertama: ");
    scanf("%f", &a);
    printf("Masukkan operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Masukkan angka kedua: ");
    scanf("%f", &b);
    if (op == '+') {
        hasil = add(a, b);
    } else if (op == '-') {
        hasil = sub(a, b);
    } else if (op == '*') {
        hasil = mul(a, b);
    } else if (op == '/') {
        hasil = div(a, b);
    } else {
        printf("Operator tidak valid\n");
        return 0;
    }
    printf("Hasil: %.2f\n", hasil);
    return 0;
}
