#include <stdio.h>

int PRICE = 2000;

void main() {
  int totalMaen, hargaAsli, menu;

  do {
    printf("Mau main gim onlen? yuk main sekarang ke WARNETKUAJA! \n");
    printf("Disini sejamnya tuh Rp. %d \n", PRICE);
    printf("Kebetulan ada diskon nih buat yang main lebih dari 5 jam \n");
    printf("Kamu mau main berapa jam? "); scanf("%d", &totalMaen);
    hargaAsli = totalMaen * PRICE;
    printf("\n================================\n");
    if (totalMaen > 5) {
      hargaAsli = hargaAsli - (hargaAsli * 20/100);
      printf("Wah kamu dapat diskon 20 persen, total bayarmu jadi Rp. %d \n", hargaAsli);
    } else
      printf("\nPesan %d jam dengan harga Rp. %d \n", totalMaen, hargaAsli);
    printf("Selamat bermain :) \n \n \n");

    printf("=========================== \n");
    printf("Mau main lagi? \n");
    printf("[1] untuk Ya, ");
    printf("[0] untuk Tidak \n");
    printf("Pilihanmu: "); scanf("%d", &menu);
  } while (menu == 1);
}