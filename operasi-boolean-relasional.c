/* Contoh perbandingan nilai numerik */
#include<stdio.h>
int main ()
{/* Kamus */
  int uang= 6000;
  int hujan=0; /*artinya hujan bernilai FALSE */
  /* Program */
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
 
   uang= 6000;
   hujan=1; /*artinya hujan bernilai TRUE */
   printf ("uang>5000 dan tidak hujan: %d \n",  (uang>5000) && (!hujan));
 
   uang= 6000;
   hujan=1;
   int adaPayung=1;
   printf ("uang>5000 dan tidak hujan dan gaada payung: %d \n",  (uang>5000) && (!hujan) && (!adaPayung));

 
  return 0;
}