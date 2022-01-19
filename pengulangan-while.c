/* print “Saya senang” sebanyak 3 kali */
#include<stdio.h>
int main ()
{
/* Kamus : */
 int i,n;
 i=0;
 printf("masukan angka (int) batas looping : ");
 scanf("%d", &n);
/* Algoritma */
 while (i<n) { /* program diulang selama nilai i < 3 */
     printf ("Saya senang belajar bahasa C \n");
     i++;
 }
 return 0;
}