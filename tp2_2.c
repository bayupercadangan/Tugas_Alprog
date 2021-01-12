#include <stdio.h>

typedef struct Mahasiswa {
  int nim;
  char *nama[20];
  char *mata_kuliah[20];
} mahasiswa;

void menu1(mahasiswa *pData) {
  mahasiswa mhs;
  printf("====== INPUT MAHASISWA ======= \n");
  printf("Masukkan NIM: "); scanf("%d", &mhs.nim);
  printf("Masukkan Nama: "); scanf("%255s", mhs.nama);
  printf("Masukkan Mata Kuliah: "); scanf("%255s", mhs.mata_kuliah);

  printf("\nNIM : %d", mhs.nim);
  printf("\nNama: %s", mhs.nama);
  printf("\nMata Kuliah: %s \n\n\n", mhs.mata_kuliah);
  *pData = mhs;
}

void menu2(mahasiswa *pData) {
  mahasiswa mhs = *pData;
  printf("===== INPUT NILAI MAHASISWA ====== \n");
  printf("NIM: %d \n", mhs.nim);
  printf("NAMA: %s \n", mhs.nama);
  printf("MATA KULIAH: %s \n", mhs.mata_kuliah);

  printf("============================\n");
}

void menu3() {
  printf("Menu 3 \n");
}

int main () {
  // Variable
  int menu;

  // Pointer
  printf("========== PROGRAM MAHASISWA ABAL-ABAL ======== \n");

  // Loop program
  do {
    mahasiswa data;
    printf("Menu Program: \n");
    printf("[1] ====> Input data mahasiswa (NIM, Nama, Mata Kuliah) \n");
    printf("[2] ====> Input nilai mahasiswa \n");
    printf("[3] ====> Melihat nilai mahasiswa dan status \n");
    printf("[4] ====> Keluar \n");

    printf("=========================================== \n");
    printf("Masukkan pilihan menu: "); scanf("%d", &menu);
    printf("\n\n");

    switch (menu) {
      case 1:
        menu1(&data);
        break;
      case 2:
        menu2(&data);
        break;
      case 3:
        menu3();
        break;
      
      default:
        break;
    }
  } while (menu != 4);

  return 0;
}