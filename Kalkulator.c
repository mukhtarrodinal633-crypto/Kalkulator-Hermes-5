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
