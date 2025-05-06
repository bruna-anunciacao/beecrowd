#include <bits/stdc++.h>
using namespace std;

double media(double a, double b, double c){
    return (a*2 + b*3 + c*5) / 10;
}

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    cout << "MEDIA = " << fixed << setprecision(1) << media(a,b,c) << endl;
    return 0;
}