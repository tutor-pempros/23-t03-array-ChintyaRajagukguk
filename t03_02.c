// NIM - NAMA

#include <stdio.h>

int main(int _argc, char **_argv)
{

    int n, angka, min = 100, max = -100, average;

  scanf("%d", &n);

  for(int i = 0; i < n; i++) {
    scanf("%d", &angka);
    if(angka < min) {
      min = angka;
    }
    if(angka > max) {
      max = angka;
    }
  }

  average = sum += angka / n;

  printf("%d\n", min);
  printf("%d\n", max);
  printf("%.2f\n", average);

  return 0;
}