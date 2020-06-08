//pragma
#include<stdio.h>
int display();

#pragma startup display
#pragma exit display

int main() {
   printf("\nMFS Dalam Function Main");
   return 0;
}

int display() {
   printf("\nMFS Dalam Function Display");
   return 0;
}	
