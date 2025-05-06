#include <bits/stdc++.h>
using namespace std;

int distancia(int x){
    return x * 2;
}

int main() {
    int x;
    cin >> x;
    cout << distancia(x) << " minutos" << endl;
    return 0;
}