/*Nama File :  Tetris.c*/
/*Nama Pembuat : Altaf Ariestian Kusuma Rahmat */
/*Tanggal : 03 April 2022 */
/*Deskripsi : menampilkan susunan karakter “*” berdasarkan input yang diberikan*/

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
        for (i = 1; i <= N; i++)
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
