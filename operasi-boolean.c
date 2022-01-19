/* Contoh perhitungan aljabar boolen, perhatikan cara penulisan
   AND dan OR serta NOT */
#include<stdio.h>
int main ()
{/* Kamus */
  int TRUE=1;
  int FALSE=0;
  /* Algoritma  */
   printf ("Ini nilai TRUE AND TRUE \t : %d \n",  TRUE && TRUE );
   printf ("Ini nilai FALSE AND TRUE \t : %d \n",  FALSE && TRUE );
   printf ("Ini nilai TRUE OR FALSE \t : %d \n",  TRUE || FALSE);
   printf ("Ini nilai FALSE OR FALSE \t : %d \n",  FALSE || FALSE );
   printf ("Ini nilai NOT TRUE \t\t : %d \n", !TRUE);
   printf ("Ini nilai NOT FALSE \t\t : %d \n", !FALSE );
  return 0;
}