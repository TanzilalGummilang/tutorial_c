/* membaca nilai integer, menuliskan nilainya jika positif */
#include<stdio.h>
int 
main ()
{
/* Kamus */
  int a;
  /* Program */
  printf ("Contoh IF satu kasus \n");
  printf ("Ketikkan suatu nilai integer : ");
  scanf ("%d", &a);
  if (a >= 5)
    {
      printf ("Nilai a positif %d \n", a);
    }
 /* jika nilai a tidak positif maka program tidak melakukan apa-apa */
  return 0;
}