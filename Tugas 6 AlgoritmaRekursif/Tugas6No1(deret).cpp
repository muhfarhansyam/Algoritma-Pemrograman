#include <iostream>
using namespace std;
	int s = 2;
int deret(int t){
	if (t==0||t==1){
		return (2);
	}else{
		return  (s+deret(t-1));
	}
}
int main(){
	int jumlah=0;
	for (int s =1;s<=5;s++){
		jumlah = jumlah+deret (s) ;
	}
	cout<<"S = 2+4+6+8+10"<<endl;
	cout<<"S= "<<jumlah;
	return 0;

}
