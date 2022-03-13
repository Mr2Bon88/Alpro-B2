/*Nama File 	: CekBulan*/
/*Deskripsi 	: Menampilkan nama-nama bulan dari nomor bulan yang dimasukkan pada layar*/
/*Pembuat       : [Altaf Ariestian Kusuma Rahmat - 24060121140146]*/
/*Tgl Pembuatan : [Minggu, 13 Maret 2022 21:00 WIB]*/

#include<stdio.h>

int main ()
{
    //kamus
    int B;
    //algoritma
    printf("Pengecekan Bulan \n");
    printf("masukkan nomor bulan : ");
    scanf ( "%d", &B);

    switch (B) {
        case 1 :
            printf("Bulan Januari!");
            break;
        case 2 :
            printf("Bulan Februari!");
            break;
        case 3 :
            printf("Bulan Maret!");
            break;
        case 4 :
            printf("Bulan April!");
            break;
        case 5 :
            printf("Bulan Mei!");
            break;
        case 6 :
            printf("Bulan Juni!");
            break;
        case 7 :
            printf("Bulan Juli!");
            break;
        case 8 :
            printf("Bulan Agustus!");
            break;
        case 9 :
            printf("Bulan September!");
            break;
        case 10 :
            printf("Bulan Oktober!");
            break;
        case 11 :
            printf("Bulan November!");
            break;
        case 12 :
            printf("Bulan Desember!");
            break;
        default:
        printf("Masukkan bulan tidak tepat");
        }
    return 0;
}
