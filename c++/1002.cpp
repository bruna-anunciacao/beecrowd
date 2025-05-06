#include <bits/stdc++.h>
using namespace std;

double area(double raio) {
    return raio * raio * 3.14159;
}

int main() {
    double raio;
    cin >> raio;
    cout << "A=" << fixed << setprecision(4) << area(raio) << endl;
    return 0;
}