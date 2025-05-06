#include <bits/stdc++.h>
using namespace std;

#define d double

d gasto(int x, int y) {
    return (x * y) / 12.0;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << fixed << setprecision(3) << gasto(x,y) << endl;
    return 0;
}