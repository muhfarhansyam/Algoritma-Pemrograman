#include <iostream>
using namespace std;
int faktorial(int t){
	if (t==0||t==1){
		return (1);
	}else{
		return (t*faktorial(t-1))  ;
	}
}
int main(){
	int a;
	int jumlah;
	cout<<"Faktorial = ";
	cin >> a;
		jumlah = faktorial(a);
	cout <<"Jumlah dari "<<a<<"! = "<<jumlah;
	return 0;
}
