#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a=0, m=0;
    cin >> n;
    if (n >= 365) {
        a = floor(n / 365);
        n -= a * 365; 
    }
    if (n >= 30) {
        m = floor(n / 30);
        n -= m * 30; 
    }
    cout << a << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << n << " dia(s)" << endl;
    return 0;
}