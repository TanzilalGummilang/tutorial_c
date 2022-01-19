/* Operasi aritmatika bilangan integer dan bilangan riil :
   Menuliskan jumlah, hasil perkalian, pembagian, modulo
 dua buah variabel integer*/
#include<stdio.h>
int 
main ()
{/* Kamus */
  int x=5;
  int y=8;
  /* Program */
  printf ("Ini nilai x + y \t : %d \n", x+y );
  printf ("Ini nilai x - y \t : %d \n", x-y );
  printf ("Ini nilai x * y \t : %d \n", x*y );
  printf ("Ini nilai x / y \t : %d \n", x/y );
  printf ("Ini nilai y / x \t : %d \n", y/x );
  printf ("Ini nilai x mod y \t : %d \n", x%y );
 
/* bandingkan dengan operasi pembagian bilangan riil */
 /* float a=5, b=8;
 printf ("Ini nilai a / b \t : %.2f \n", a/b );
 printf ("Ini nilai b / a \t : %.2f \n", b/a ); */

 /*  */
 printf ("%d + %d + %d \t\t = ",x,x,x);
 printf ("%d\n", x+x+x);
 printf ("%d + %d + %d \t\t = %d\n",x,x,x, x+x+x);
 
 printf ("%d + %d * %d \t\t = %d\n",x,x,x, x+x*x);

 int a=1;
 int b=2;
 int c=5;
 int d=7;
 int e=8;
 int f=9;
 int hasil = ((((a+b)/(d*c)*e)-d)+f);

 printf ("((((%d+%d)/(%d*%d)*%d)-%d)+%d) \t = ", a,b,d,c,e,d,f);
 printf ("%d",hasil);
 
  return 0;
}