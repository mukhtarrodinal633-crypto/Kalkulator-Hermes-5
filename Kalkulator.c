//Kelompok 5 HERMES
//Rodinal Mukhtar Aulya : 2506553263
//cristian              : 2506550822
//Thoriq Muhammad Fatih : 2506549410
//Haikel Zaki Nurfaaiz  : 2506533394      

#include <stdio.h>

// Fungsi penjumlahan
float add(float a, float b) {
    return a + b;
}
// Fungsi pengurangan
float sub(float a, float b) {
    return a - b;
}
// Fungsi perkalian
float mul(float a, float b) {
    return a * b;
}
// Fungsi pembagian
float div(float a, float b) {
    if (b == 0) {
        printf("Error: Tidak bisa dibagi dengan nol!\n"); // penyebut tidak valid untuk angka 0
        return 0;
    }
    return a / b;
}

int main (){
    float a, b, hasil;
    char op;
    printf("Masukkan angka pertama: "); //memasukkan angka bebas untuk di + - * /
    scanf("%f", &a);
    printf("Masukkan operator (+ - * /): ");
    scanf(" %c", &op);
    printf("Masukkan angka kedua: "); //
    scanf("%f", &b);
    //Untuk menentukan pilihan mana yang diinginkan dari + - * /
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

    // Output
    printf("Hasil: %.2f\n", hasil);
    return 0;
}
