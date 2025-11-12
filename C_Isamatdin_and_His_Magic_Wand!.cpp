#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long
int main() {
	// your code goes here
	
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a;
        bool even = false, odd = false;
        for(int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            a.push_back(x);
            if(x % 2 == 0) {
                even = true;
            }
            else {
                odd = true;
            }
        }
        if((even && !odd) || (odd && !even)) {
            for(int i = 0; i < n - 1; i++) {
                cout << a[i] << " ";
            }
            cout << a[n-1] << endl;
        }
        else {
            sort(a.begin(), a.end());
            for(int i = 0; i < n - 1; i++) {
                cout << a[i] << " ";
            }
            cout << a[n-1] << endl;
        }
    }
}