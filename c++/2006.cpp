#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n=0;
    cin >> t;
    vector<int> r(5);
    for (int &x:r) cin >> x;
    for (int i=0;i<r.size();i++){   
        if (t == r[i]){
            n++;
        }
    }   
    cout << n << endl;
    return 0;
}