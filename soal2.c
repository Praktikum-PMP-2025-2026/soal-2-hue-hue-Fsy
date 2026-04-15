/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 01 - Overview of C Language
 *   Hari dan Tanggal    : Rabu, 15 April 2026
 *   Nama (NIM)          : Fesya Dea Azzahra (13224049)
 *   Nama File           : soal2.c
 *   Deskripsi           : Menghitung banyak langkah (transformasi) hingga n menjadi 1 dengan aturan transformasi tertentu
 * 
 */
// Soal 2: Kode Batu Stabil

#include <stdio.h>

int sumOfSteps (int n) {
    if (n == 1) {
        return 0;
    }

    if (n % 2 == 0) {
        return 1 + sumOfSteps(n / 2);
    } else {
        return 1 + sumOfSteps(3 * n + 1);
    }
}

int main () {
    int N;
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int steps = sumOfSteps(i);
        printf("LANGKAH %d\n", sumOfSteps(N));
    }
    return 0;
}

