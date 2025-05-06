#include <bits/stdc++.h>
using namespace std;

double volume (double raio) {
    return (4.0/3) * 3.14159 * pow(raio, 3);
}

int main() {
    double raio;
    cin >> raio;
    cout << "VOLUME = " << fixed << setprecision(3) << volume(raio) << endl;
    return 0;
}