#include <bits/stdc++.h>
using namespace std;

double total(int n1, int n2, double v1, double v2) {
    return (n1 * v1) + (n2 * v2);
}

int main() {
    int p1, n1, p2, n2;
    double v1, v2;
    cin >> p1 >> n1 >> v1;
    cin >> p2 >> n2 >> v2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total(n1,n2,v1,v2) << endl;
    return 0;
}