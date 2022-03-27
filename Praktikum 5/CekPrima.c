/*Nama File :  CekPrima.c*/
/*Nama Pembuat : Altaf Ariestian Kusuma Rahmat */
/*Tanggal : 27 Maret 2022 */
/*Deskripsi : menentukan apakah masukan dari sebuah bilangan sembarang N merupakan prima atau bukan*/

// Header File
#include<stdlib.h>
#include<stdio.h>

// Program Utama
int main(void){
    // Kamus
    int N,i,counter;

    // Algoritma
    printf("Program Cek Prima\n");
    printf("\n");
    printf("Masukan bilangan : ");
    scanf("%d",&N);
    if(N<=2) {
        if(N <= 1){
            printf("Masukan tidak valid");
        } else {
            printf("%d adalah bilangan prima \n",N);
        }
    } else {
        for(i=2;i<N;i++){
            if(N%i==0){
                counter = 0;
                break;
            } else {
                counter = 1;
            }
        }
        if(counter==0){
            printf("%d adalah bukan bilangan prima \n",N);
            } else {
            printf("%d adalah bilangan prima \n",N);
        }
    }
    return 0;
}