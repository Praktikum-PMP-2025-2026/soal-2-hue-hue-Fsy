/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 01 - Overview of C Language
 *   Hari dan Tanggal    : Rabu, 15 April 2026
 *   Nama (NIM)          : Fesya Dea Azzahra (13224049)
 *   Nama File           : soal2.c
 *   Deskripsi           : Menghitung banyak langkah sampai menjadi 1 dengan aturan transformasi tertentu
 * 
 */

#include <stdio.h>

void sumOfSteps (int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2; // Jika n genap, bagi dengan 2
        } else {
            n = 3 * n + 1; // Jika n ganjil, kalikan dengan 3 dan tambahkan 1
        }
        steps++; // Hitung langkah yang diperlukan
    }
    printf("%d\n", steps); // Tampilkan jumlah langkah yang diperlukan untuk mencapai 1
}

int main () {
    int N;
    printf("Masukkan N: ");
    scanf("%d", &N);
    sumOfSteps(N);
    return 0;
}
