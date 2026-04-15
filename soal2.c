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

void sumOfSteps (int n) {
    int langkah = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2; // Jika n genap, bagi dengan 2
            langkah++;
        } else {
            n = 3 * n + 1; // Jika n ganjil, kalikan dengan 3 dan tambahkan 1
            langkah++;
        }
        return 0; 
    }
    printf("%d\n", langkah); // Tampilkan jumlah langkah yang diperlukan untuk mencapai 1
}

int main () {
    int N;
    printf("%d\n", N);
    scanf("%d", &N);
    sumOfSteps(N);
    return 0;
}

