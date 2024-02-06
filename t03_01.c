// 12S3045 - Chintya Reginauli Rajagukguk

 #include <stdio.h>

int main(int _argc, char **_argv)
{
  int n, angka, min = 100, max = -100;

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

  printf("%d\n", min);
  printf("%d\n", max);

  return 0;
}