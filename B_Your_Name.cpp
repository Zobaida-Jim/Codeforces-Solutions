#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s,a; cin >> a >> s;
        sort(s.begin(),s.end());
        sort(a.begin(),a.end());
        if(a == s) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
        //cout << a << "  "<< s << endl;
    }
}