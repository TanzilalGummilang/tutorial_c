/* Mendefinisikan konstanta bertype int, float, char  */
#include<stdio.h>
#define FALSE 0
#define NOL 0
#define SATU 1
#define pi 3.1415
int main ()
{/* Kamus */
  const int maks=3;
  const float param =2.5;
  const char cc = 11 ;
  const char cA = 'A' ;
 /* Algoritma */
  printf ("PI \t = %.2f\n", pi);
  printf ("NOL \t = %d\n", NOL);
  printf ("SATU \t = %d\n", SATU);
  printf ("FALSE \t = %d\n", FALSE);
  printf ("maks \t = %d\n", maks);
  printf ("param \t = %f\n", param);
  printf ("cc \t = %c\n", cc);
  printf ("cA \t = %c\n", cA);
  printf ("3\n"); /*tanpa memakai nama, tidak disarankan */

  return 0;
}