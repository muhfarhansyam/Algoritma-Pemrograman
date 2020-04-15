#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char string1[20];
    int i, length;
    int flag = 1;
    
    cout << "Masukkan String : "; cin >> string1;
    
    length = strlen(string1);
    
    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 0;
            break;
   }
}
    
    if (flag) {
        		cout << string1 << " Adalah Palindrom" << endl; 

//		cout << string1 << " Bukan Sebuah Palindrom" << endl; 
    }    
    else {
         cout << string1 << " Bukan Sebuah Palindrom" << endl; 
//		cout << string1 << " Adalah Palindrom" << endl; 
    }
}
