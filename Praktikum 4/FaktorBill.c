/*Nama File :  FaktorBill.c*/
/*Nama Pembuat : Altaf Ariestian Kusuma Rahmat*/
/*Tanggal : 20 Maret 2022 */
/*Deskripsi : menampilkan faktor dari sebuah masukan bilangan sembarang N*/

// Header File
#include<stdlib.h>
#include<stdio.h>

// Program Utama
int main(void){
    // Kamus
    int N,i;

    // Algoritma
    printf("Program Faktor Bilangan\n");
    printf("\n");
    printf("Masukan bilangan : ");
    scanf("%d",&N);
    printf("Faktornya : ");
    if(N>0){
        for(i=1;i<=N;i++) {
            if(N % i == 0) {
                printf(" %d ",i);
            }
        }
    } else {
        printf("Bilangan tidak boleh kurang dari 0\n");
    }
    printf("\n=========================================\n");
    return 0;
}
