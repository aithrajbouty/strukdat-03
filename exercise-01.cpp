/*
Author      : Aithra Junia Bouty
NPM         : 140810180054
Deskripsi   :
Tahun       : 2019
*/
#include <iostream>
#include <cmath>;
using namespace std;

typedef struct{
    float panjang;
    float lebar;
} segiempat;

void input(segiempat *s){
    cout << "Input panjang  : "; cin >> s->panjang;
    cout << "Input lebar    : "; cin >> s->lebar;
}

float keliling(segiempat s){
    float k = (s.panjang * 2) + (s.lebar * 2);
    return(k);
}

float luas(segiempat s){
    float l=s.panjang * s.lebar;
    return(l);
}

float diagonal(segiempat s){
    float d = sqrt((s.panjang*s.panjang)+(s.lebar*s.lebar));
    return(d);
}

void print(segiempat s){
    cout << "panjang    : " << s.panjang;
    cout << "\nlebar      : " << s.lebar;
    cout << "\nkeliling   : " << keliling(s);
    cout << "\nluas       : " << luas(s);
    cout << "\ndiagonal   : " << diagonal(s);
}

int main()
{
    segiempat* s;
    s = new segiempat;
    input(s);
    print(*s);
}
