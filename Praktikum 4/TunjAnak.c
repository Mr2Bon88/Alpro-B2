/*Nama File :  TunjAnak.c*/
/*Nama Pembuat : Altaf Ariestian Kusuma Rahmat*/
/*Tanggal : 20 Maret 2022 */
/*Deskripsi : menghitung besar tunjangan anak yang diberikan berdasarkan gaji pokok, jumlah anak, dan aturan yang telah ditetapkan*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    // Kamus
    int jumlahAnak, gajiPokok, tunjangan;

    // ALgoritma
    printf("Program Tunjangan Anak\n");
    printf("\n");
    printf("Masukan jumlah anak: ");
    scanf("%d",&jumlahAnak);
    printf("Masukan gaji pokok: ");
    scanf("%d",&gajiPokok);
    if(jumlahAnak>=0 && jumlahAnak <=3){
        tunjangan = jumlahAnak*(gajiPokok*10/100);
        printf("Besar tunjangan: Rp. %d\n",tunjangan);
    } else {
        tunjangan = 3*(gajiPokok*10/100);
        printf("Besar tunjangan: Rp. %d\n",tunjangan);
    }
    printf("================================================");
    return 0;
}
