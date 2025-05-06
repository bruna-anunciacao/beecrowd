#include <bits/stdc++.h>
using namespace std;

double areat (double a, double c){
    return (a*c)/2;
}

double areac (double c){
    return pow(c, 2) * 3.14159;
}

double areatp(double a, double b, double c){
    return ((a + b) * c) / 2;
}

double areaq (double b){
    return pow(b,2);
}

double arear (double a, double b){
    return a * b;
}

int main() {
    double a,b,c;
    cin >> a >> b >> c;
    cout << "TRIANGULO: " << fixed << setprecision(3) << areat(a,c) << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << areac(c) << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << areatp(a,b,c) << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << areaq(b) << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << arear(a, b) << endl;
    return 0;
}