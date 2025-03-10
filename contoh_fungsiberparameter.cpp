#include <iostream>
using namespace std;

double alas, tinggi;

void procedurInput(){
cout << "Masukkan Nilai alas : ";
cin >> alas;

cout << "Masukkan Nilai tinggi : ";
cin >> tinggi;
}

double hitungluas(){
    return 0.5 * alas * tinggi;
}

double hitungluas2(double a, double t){
    return 0.5 * a * t;
}

void procedurOutput(){
    cout << "Luas Segitiga = " << hitungluas() << endl;
}
void procedurOutput2(){
    cout << "Luas Segitiga = " << hitungluas2(alas, tinggi) << endl;
}

int main(){
procedurInput();
procedurOutput();
procedurOutput2();
}