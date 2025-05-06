#include <bits/stdc++.h>
using namespace std;

#define d double

d distancia(d x1, d x2, d y1, d y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    d x1, x2, y1, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cout << fixed << setprecision(4) << distancia(x1,x2,y1,y2) << endl;
    return 0;
}
