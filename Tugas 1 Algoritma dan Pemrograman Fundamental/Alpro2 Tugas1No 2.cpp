#include <iostream>
using namespace std;
int main(){
	int i = 0;
	int j = 0;
	int x = 1;
	int dus[3][3] = {{2,4,6}, {8,10,12}, {14,16,18}};
	
	cout<<"jumlah dus = 9\n";
	
	for (i = 0; i < 3; i++){
    	for(j=0;j<3;j++){
    		printf("Isi Dos Ke %d : ",x); //Output Dos
    		x++;
       		printf("%d",dus[i][j]); //Output Array
       		printf("\n");
    	}
	}
}
