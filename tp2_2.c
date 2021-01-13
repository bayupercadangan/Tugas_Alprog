#include <stdio.h>

typedef struct Mahasiswa {
  int nim;
  char *nama[20];
  char *mata_kuliah[20];
} mahasiswa;

typedef struct NilaiMahasiswa {
  int hadir;
  int tugas;
  int quiz;
  int forum;
  int uas;
} nilaiMahasiswa;

void menu1(mahasiswa* pData, int* pTotalData) {
  int total = *pTotalData;
  mahasiswa mhs[10];
  printf("====== INPUT MAHASISWA ======= \n");
  printf("Masukkan NIM: "); scanf("%d", &mhs[total].nim);
  printf("Masukkan Nama: "); scanf("%255s", mhs[total].nama);
  printf("Masukkan Mata Kuliah: "); scanf("%255s", mhs[total].mata_kuliah);

  printf("\nSukses Menambahkan Mahasiswa\n");
  *pData = mhs[10];
  total++;
  *pTotalData = total;
}

void menu2(mahasiswa* pData, nilaiMahasiswa* pDataNilai,  int* pTotalData) {
  int total = *pTotalData;
  mahasiswa mhs[10];
  nilaiMahasiswa nilai[10];
  mhs[10] = *pData;
  printf("====== INPUT NILAI MAHASISWA ======= \n");
  for (int i = 0; i <= total - 1; i++) {
    printf("NIM: %d \n", mhs[i].nim);
    printf("NAMA: %s \n", mhs[i].nama);
    printf("MATA KULIAH: %s \n", mhs[i].mata_kuliah);
    printf("Masukkan Nilai Hadir (0-100): "); scanf("%d", &nilai[i].hadir);
    printf("Masukkan Nilai Tugas (0-100): "); scanf("%d", &nilai[i].tugas);
    printf("Masukkan Nilai Quiz (0-100): "); scanf("%d", &nilai[i].quiz);
    printf("Masukkan Nilai Keaktifan Forum (0-100): "); scanf("%d", &nilai[i].forum);
    printf("Masukkan Nilai UAS (0-100): "); scanf("%d", &nilai[i].uas);
    printf("\n\n");
  }
  *pData = mhs[10];
  *pDataNilai = nilai[10];
  *pTotalData = total;

  printf("\nSukses Menambahkan Nilai\n");
}

void menu3(mahasiswa* pData, nilaiMahasiswa* pDataNilai, int* pTotalData) {
  int total = *pTotalData;
  mahasiswa mhs[10];
  nilaiMahasiswa nilai[10];
  mhs[10] = *pData;
  nilai[10] = *pDataNilai;
  printf("====== NILAI MAHASISWA ======= \n");
  for (int i = 0; i <= total - 1; i++) {
    int nilaiHadir, nilaiTugas, nilaiQuiz, nilaiForum, nilaiUas, kalkulasiNilai;
    nilaiHadir = nilai[i].hadir * 10 / 100;
    nilaiTugas = nilai[i].tugas * 20 / 100;
    nilaiQuiz = nilai[i].quiz * 10 / 100;
    nilaiForum = nilai[i].forum * 10 / 100;
    nilaiUas = nilai[i].uas * 50 / 100;
    kalkulasiNilai = nilaiHadir + nilaiTugas + nilaiQuiz + nilaiForum + nilaiUas;
    printf("NIM: %d", mhs[i].nim);
    printf("NAMA: %s", mhs[i].nama);
    printf("MATA KULIAH: %s", mhs[i].mata_kuliah);
    printf("NILAI: %d", kalkulasiNilai);
    printf("\n\n");
  }
  *pData = mhs[10];
  *pDataNilai = nilai[10];
  *pTotalData = total;

  printf("\nNILAI===========\n");
  
}

int main () {
  // Variable
  int menu;
  int totalData = 0;
  mahasiswa data[10];
  nilaiMahasiswa dataNilai[10];

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
        menu2(&data[10], &dataNilai[10], &totalData);
        break;
      case 3:
        menu3(&data[10], &dataNilai[10], &totalData);
        break;
      
      default:
        break;
    }
  } while (menu != 4);

  return 0;
}