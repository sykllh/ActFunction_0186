//library
#include <iostream>
using namespace std;

//deklarasi variabel global
int r;
float phi = 3.14159;

//implementasi fungsi dan prosedur
void input(){
    cout << "Masukkan jari-jari : ";
    cin >> r;
}
//fungsi hitung luas
float luaslingkaran(float a,int b){
    return a*b*b;
}
//prosedur luas lingkaran
void output(){
    cout << "Hasilnya : " << luaslingkaran(phi,r) << endl;
}
//program utama
int main(){
input();
output();
}