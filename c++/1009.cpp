#include <bits/stdc++.h>
using namespace std;

double calculo(double s, double t){
    return s + (t * 0.15);
}

int main() {
    string name;
    double s, t;
    cin >> name >> s >> t;
    cout << "TOTAL = R$ " << fixed << setprecision(2) << calculo(s, t) << endl;
    return 0;
}