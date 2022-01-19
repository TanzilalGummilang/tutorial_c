/* print “Saya senang” sebanyak 3 kali */
#include<stdio.h>
int main ()
{
/* Kamus : */
 int i,n;
 
 printf("masukan angka (int) batas looping : ");
 scanf("%d", &n);
 /* Algoritma */
 if(n > 0) {
   for (i=0; i<n; i++) {
      printf ("Saya senang belajar bahasa C \n");
   }  
 } 
 else if(!(n > 0)) {
   printf("anda tidak memasukan angka!");
 }
  return 0;
}