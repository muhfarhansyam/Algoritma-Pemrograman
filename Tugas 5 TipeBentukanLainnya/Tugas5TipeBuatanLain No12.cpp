#include <iostream>
using namespace std;
struct poin {
int a;
int b;
};
typedef struct poin juara;
int main(){
poin juara = {1000,1225};
cout << "tim a = " << juara.a << endl;
cout << "tim b = " << juara.b <<endl;
}
