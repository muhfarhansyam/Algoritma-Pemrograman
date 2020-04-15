#include<stdio.h> 

int main() 

{ 

    int a = 57; //Deklarasi Variabel

    void *ptr = &a; //Deklarasi Pointer Bertipe Void

    printf("%d", *(int *)ptr); //Output Pointer



}
