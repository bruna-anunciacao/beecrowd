#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, menos, cem=0, cinq=0, vin=0, dez=0, cinc=0, dois=0, um=0;
    cin >> n;
    cout << n << endl;
    if (n >= 100) {
        cem = floor(n / 100);
        n -= cem * 100;
    } 
    if (n >= 50) {
        cinq = floor(n / 50);
        n -= cinq * 50;
    } 
    if (n >= 20) {
        vin = floor(n / 20);
        n -= vin * 20;
    } 
    if (n >= 10) {
        dez = floor(n / 10);
        n -= dez * 10;
    }
    if (n >= 5) {
        cinc = floor(n / 5);
        n -= cinc * 5;
    } 
    if (n >= 2) {
        dois = floor(n / 2);
        n -= dois * 2;
    } 
    if (n >= 1) {
        um = floor(n / 1);
        n -= um * 1;
    }
    cout << cem << " nota(s) de R$ 100,00" << endl;
    cout << cinq << " nota(s) de R$ 50,00" << endl;
    cout << vin << " nota(s) de R$ 20,00" << endl;
    cout << dez << " nota(s) de R$ 10,00" << endl;
    cout << cinc << " nota(s) de R$ 5,00" << endl;
    cout << dois << " nota(s) de R$ 2,00" << endl;
    cout << um << " nota(s) de R$ 1,00" << endl;

    return 0;
}