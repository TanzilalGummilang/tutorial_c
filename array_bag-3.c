/* Mencari nilai maksimum dari sebuah tabel yang berisi 10 nilai integer */
#include<stdio.h>
int main ()
{/* Kamus : */
  int i;
  int Tab[]= { 98, 50 , 6 , 200, 3, 100, 30, 8, 99, 1, 200, 201 };
  int max, min,length;
  float sum, average, median;

  length = sizeof(Tab) / sizeof(*Tab);

  /* Algoritma */
// max
  max = Tab[0];
  for (i=1;i< length; i++)  {
     if (Tab[i]>max) {
        max=Tab[i];
     }
  } 
  printf ("Nilai Max : %d \n", max);

// banyaknya nilai maksimum (jika ada)
int n = 0;
for(i=0; i<length; i++) {
  if(max == Tab[i]) {
    n++;
  }
}
printf ("Banyaknya Nilai Max : %d \n", n);


// min
  min = Tab[0];
  for (i=1;i< 10; i++)  {
     if (Tab[i]<min) {
        min=Tab[i];
     }
  } 
  printf ("Nilai Min : %d \n", min);

// average
length = sizeof(Tab) / sizeof(*Tab);
sum = 0;

for(int i = 0; i < length; i++){
    sum += Tab[i];
}

average = (float)sum / (float)length;
printf("Rata-rata : %.2f\n", average);

// median
median = ((float)max + (float)min) /2;
printf("median : %.2f", median);

  return 0;
}