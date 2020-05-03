#include <stdio.h>

struct test1 { 

    unsigned int x : 5; 

    unsigned int y : 7; 

}; 

struct test2 { 

    unsigned int x : 3; 

    unsigned int : 0; 

    unsigned int y : 7; 

}; 

enum day {sunday = 7, monday, tuesday, 

		wednesday, thursday = 5, friday, saturday}; 

int main() 
{ 
	printf("%d %d %d %d %d %d %d \n", sunday, monday, tuesday, 

			wednesday, thursday, friday, saturday); 
			
	printf("Ukuran test1 Adalah %lu bytes\n", 

           sizeof(struct test1)); 

    printf("Ukuran test2 Adalah %lu bytes\n", 

           sizeof(struct test2));  
    return 0;
}
