#include <stdio.h>

typedef struct Mahasiswa {
  int nim;
  char *nama[20];
  char *mata_kuliah[20];
} mahasiswa;

void menu1(mahasiswa* pData, int* pTotalData) {
  int total = *pTotalData;
  mahasiswa mhs[10];
  printf("====== INPUT MAHASISWA ======= \n");
  printf("Masukkan NIM: "); scanf("%d", &mhs[total].nim);
  printf("Masukkan Nama: "); scanf("%255s", mhs[total].nama);
  printf("Masukkan Mata Kuliah: "); scanf("%255s", mhs[total].mata_kuliah);

  printf("\nNIM : %d", mhs[total].nim);
  printf("\nNama: %s", mhs[total].nama);
  printf("\nMata Kuliah: %s \n\n\n", mhs[total].mata_kuliah);
  *pData = mhs[10];
  total++;
  *pTotalData = total;
}

void menu2(mahasiswa* pData, int* pTotalData) {
  int total = *pTotalData;
  mahasiswa mhs[10];
  mhs[10] = *pData;
  for (int i = 0; i < total; i++) {
    printf("NIM: %d \n", mhs[i].nim);
    printf("NAMA: %s \n", mhs[i].nama);
    printf("MATA KULIAH: %s \n", mhs[i].mata_kuliah);
    printf("\n\n");
  }

  printf("============================\n");
}

void menu3() {
  printf("Menu 3 \n");
}

int main () {
  // Variable
  int menu;
  int totalData = 0;
  mahasiswa data[10];

  // Pointer
  printf("========== PROGRAM MAHASISWA ABAL-ABAL ======== \n");

  // Loop program
  do {
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
        menu1(&data[10], &totalData);
        break;
      case 2:
        menu2(&data[10], &totalData);
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