/*Nama File :  TarifPLN.c*/
/*Nama Pembuat : Altaf Ariestian Kusuma Rahmat*/
/*Tanggal : 20 Maret 2022 */
/*Deskripsi : menghitung besar biaya pemakaian listrik berdasarkan golongan, jumlah pemakaian daya listrik serta aturan yang telah ditetapkan*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
    // Kamus
    int golongan,tarif;
    float pemakaian;

    // ALgoritma
    printf("Program Tarif PLN\n");
    printf("\n");
    printf("Masukan golongan: ");
    scanf("%d",&golongan);
    printf("Masukan besar pemakaian(kWh): ");
    scanf("%f",&pemakaian);
    if(pemakaian>=100){
        if(pemakaian <= 1000){
            switch (golongan)
            {
            case 1:
                tarif = 1000*pemakaian;
                printf("Besar tarif listrik : Rp. %d\n",tarif);
                break;
            case 2:
                tarif = 2000*pemakaian;
                printf("Besar tarif listrik : Rp. %d\n",tarif);
                break;
            default:
                printf("Golongan tidak ditemukan\n");
                break;
            }
        } else {
            switch (golongan)
            {
            case 1:
                tarif = 1000*pemakaian + (1000*pemakaian)*10/100;
                printf("Besar tarif listrik : Rp. %d\n",tarif);
                break;
            case 2:
                tarif = 2000*pemakaian + (2000*pemakaian)*10/100;
                printf("Besar tarif listrik : Rp. %d\n",tarif);
                break;
            default:
                printf("Golongan tidak ditemukan\n");
                break;
            }
        }
    } else {
        printf("Pemakaian tidak boleh kurang dari 100\n");
    }
    printf("================================================");
    return 0;
}
