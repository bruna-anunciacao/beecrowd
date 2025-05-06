#include <bits/stdc++.h>
using namespace std;

int maiorAB(int a, int b) {
    return (a + b + abs(a-b)) / 2;
}

int main() {
    int a, b, c, temp;
    cin >> a >> b >> c;
    temp = maiorAB(a, b);
    cout << maiorAB(temp, c) << " eh o maior" << endl;
    return 0;
}