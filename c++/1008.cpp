#include <bits/stdc++.h>
using namespace std;

double salario(int h, double v) {
    return h * v;
}

int main() {
    int n, h;
    double v;
    cin >> n >> h >> v;
    cout << "NUMBER = " << n << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salario(h, v) << endl;
    return 0;
}