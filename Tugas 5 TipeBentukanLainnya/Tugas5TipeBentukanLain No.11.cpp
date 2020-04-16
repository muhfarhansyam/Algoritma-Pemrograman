#include <iostream>
using namespace std;
struct biodata { //deklarasi tipe struct

char nama[30];
int umur;
float tinggibadan;

} ;
void daftar(struct biodata diri)
{

cout << "Nama : " << diri.nama ;
cout << "\n Umur : " << diri.umur ;
cout << "\n Tinggi Badan : " << diri.tinggibadan ;

}
int main()
{
struct biodata pribadi = {"Rambo",25,185.7};
daftar(pribadi);
return 0;
}

