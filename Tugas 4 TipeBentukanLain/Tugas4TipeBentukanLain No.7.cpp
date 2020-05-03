#include <iostream>
#include <conio.h>
using namespace std;

union MyUnion
{
      int x;
      int y;
};

int main()
{
      //memberi nilai 571 pada variabel x
      MyUnion data;
      data.x  = 571;

      cout<<"Nilai varibel dengan Union "<<endl;
      cout<<"-------------------------- "<<endl;
      cout<<"Nilai x = "<<data.x<<endl;
      cout<<"Nilai y = "<<data.y<<endl;
      //y bernilai sama dengan x

      getche();
      return 0;
}
