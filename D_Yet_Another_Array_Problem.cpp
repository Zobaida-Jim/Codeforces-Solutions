#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool f = true;
        for(ll x = 2; x <= 100; x++) {
            bool found = false;
            for(int i = 0; i < n; i++) {
                if(__gcd(a[i], x) == 1) {
                    found = true;
                    break;
                }
            }
            if(found) {
                cout << x << endl;
                break;
                f = false;
            }
        }
        if(!f) {
            cout << "-1" << endl;
        }
    }
}