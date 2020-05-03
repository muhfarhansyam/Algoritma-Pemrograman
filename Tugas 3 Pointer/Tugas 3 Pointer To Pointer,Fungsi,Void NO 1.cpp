#include <stdio.h> //library standar input output untuk menggunakan library function seperti printf
 
int main () {

   int x;
   int  *a;
   int  **aa;

   x = 7;

   /* Mengambil alamat dari variabel x  */
   a = &x;

   /* menambil alamat ptr menggunakan alamat operator & */
   aa = &a;

   /* mengambil nilai menggunakan pptr */
   printf("Value of var = %d\n", x );//output dari x
   printf("Nilai yang tersedia di *a = %d\n", *a );//output dari *a
   printf("Nilai yang tersedia di **aa = %d\n", **aa);//output **aa
   
   return 0;
}
