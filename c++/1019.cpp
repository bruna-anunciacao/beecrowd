#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m=0,h=0;
    if (n >= 60) {
       m = floor(n / 60);
       n -= m * 60; 
    }
    if (m >=60) {
        h = floor(m / 60);
        m -= h * 60;
    }
    cout << h << ":" << m << ":" << n << endl;
    return 0;
}