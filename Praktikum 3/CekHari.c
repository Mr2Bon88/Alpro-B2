/*Nama File 	: CekHari*/
/*Deskripsi 	: Menampilkan nama-nama hari dari nomor hari yang dimasukkan pada layar*/
/*Pembuat       : [Altaf Ariestian Kusuma Rahmat - 24060121140146]*/
/*Tgl Pembuatan : [Minggu, 13 Maret 2022 21:00 WIB]*/

#include<stdio.h>

int main ()
{
    //kamus
    int H;
    //algoritma
    printf("Pengecekan Hari \n");
    printf("masukkan angka hari : ");
    scanf ( "%d", &H);

    switch (H) {
        case 1 :
            printf("Hari Senin");
            break;
        case 2 :
            printf("Hari Selasa");
            break;
        case 3 :
            printf("Hari Rabu");
            break;
        case 4 :
            printf("Hari Kamis");
            break;
        case 5 :
            printf("Hari Jum'at");
            break;
        case 6 :
            printf("Hari Sabtu");
            break;
        case 7 :
            printf("Hari Minggu");
            break;
        default:
        printf("Masukkan hari tidak tepat!");
        }
    return 0;

}
