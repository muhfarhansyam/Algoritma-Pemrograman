#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
       //stream untuk menulis file
       ofstream datamhs;

       //membuka file,
       //jika file tidak ditemukan maka file akan otomatis dibuat
       datamhs.open("datamhs.txt", ios::app);

       cout<<"Menulis File Ekstensi"<<endl;
       cout<<"--------------"<<endl;

       //fail() -> untuk memeriksa suatu kesalahan pada operasi file
       if(!datamhs.fail())
       {
              //menulis ke dalam file
              datamhs<<"STAMBUK:13020190005"<<endl;
              datamhs<<"Nama Mahasiswa : Muhammad Farhan Syam"<<endl;
              datamhs<<"Kelas: A1"<<endl;
              datamhs<<"IPK: 3.96"<<endl;
              datamhs.close(); //menutup file
              cout<<"Text telah berhasil ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }
      
       getche();
       return 0;
}
