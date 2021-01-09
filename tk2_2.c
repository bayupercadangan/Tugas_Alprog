#include <stdio.h>

void main() {
  printf("Hasil Numerik dari ekspresi relasi dan logika \n");
  printf("============================================== \n");

  int a = 2, b = 3, c = 4, k = 5, l = 6, m = 7;

  printf("D=(4+2>A&&B–2>3+2||B+2<=6+2) \n");
  int A = 4 + 2 > a && b - 2 > 3 + 2 || b + 2 <= 6 + 2;
  printf("A = %i \n", A);
  printf("============================ \n");

  printf("D=K+5<M||(C*M<L&&2*M–L>0) \n");
  int B = k + 5 < m || (c * m < l && 2 * m - l > 0);
  printf("B = %i \n", B);
  printf("============================ \n");

  printf("D=L+5<M||C*K< L&&2*K–L>0 \n");
  int C = l + 5 < m || c * k < l && 2 * k - l > 0;
  printf("C = %i \n", C);
  printf("============================ \n");

  printf("D=A*4<=3*M+B \n");
  int D = a * 4 <= 3 * m + b;
  printf("D = %i \n", D);
  printf("============================ \n");

  printf("D=K+10>A&&L–2>4*C \n");
  int E = k + 10 > a && l - 2 > 4 * c;
  printf("E = %i \n", E);
  printf("============================ \n");
}