#include <iostream>
using namespace std;

struct orang{
char nama[30];
int umur;
char alamat[20];
char nohp[13];
};
int main(){
struct orang biodata = {"Rambo",25,"Pocinki Street","081221442112"};
struct orang *data;
data = &biodata;
cout <<"nama :" <<data->nama <<"\n";
cout<<"umur : " <<data->umur <<"tahun"<<"\n";
cout<<"Alamat: "<< data->alamat<<"\n";
cout<<"No Telepon: "<<data->nohp;
}
