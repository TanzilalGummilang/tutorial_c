#include<stdio.h>
int main ()
{
/* KAMUS */
  char c = 65; /* inisialisasi nilai karakter dengan 65, kode huruf āAā */
  char c1;
/* Algoritma */
/* penulisan karakter sebagai huruf */
  printf ("Karakter = %c\n", c);
  c1 = 'Z'; /* variabel c1 diisi dengan huruf āZā */
  printf ("Karakter = %c\n", c1);
 
/* penulisan karakter */
  printf ("Karakter dalam kode ASCII = %d\n", c);
  printf ("Karakter sebagai huruf = %c\n", c);
  printf ("Karakter dalam kode ASCII = %d\n", c1);
  printf ("Karakter sebagai huruf = %c\n", c1);
 
  return 0;
}