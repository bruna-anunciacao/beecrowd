#include <bits/stdc++.h>
using namespace std;

double calculo(int x, double y) {
    return x / y;
}

int main() {
    int x;
    double y;
    cin >> x >> y;
    cout << fixed << setprecision(3) << calculo(x, y) << " km/l" << endl;
    return 0;
}