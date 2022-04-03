/*Nama File :  Tetris1.c*/
/*Nama Pembuat : Altaf Ariestian Kusuma Rahmat */
/*Tanggal : 03 April 2022 */
/*Deskripsi : menampilkan susunan karakter “*” dengan posisi terbalik berdasarkan input yang diberikan */

// Header File
#include<stdlib.h>
#include<stdio.h>

// Program Utama
int main(void){
    // Kamus
    int i,j,N;

    // Algoritma
    printf("Program Tetris\n");
    printf("\n");
    printf("Masukan batas : ");
    scanf("%d",&N);
    if(N>0){
        for (i = N; i > 0; i--)
        {
            for (j = 0; j < i; j++)
            {
                printf("*");
            }
        printf(" --%d",i);
        printf("\n");
        }
    } else {
        printf("Masukan tidak boleh kurang dari 0\n");
    }
    return 0;
}
