#define CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v) v.begin(), v.end()
#define pii pair<int, int>
#define ppb pop_back
#define pb push_back
#define mii map<int, int>
#define mll map<long long, long long>
#define no_ans cout << -1 << '\n';
#define YES cout << "YES\n";
#define NO cout << "NO\n";
 
const int MAX_N = 1000;
 
void SetIO(string str = "") {
    if (str != "") {
        freopen((str + ".in").c_str(), "r", stdin);
        freopen((str + ".out").c_str(), "w", stdout);
    } else {
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    }
}
 
void FastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(){
    int n, q;
    cin >> n;
    vector<int>a(n), b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    b[n-1] = n;
    for(int i = n - 2; i >= 0; i--){
        b[i] = (a[i] == a[i+1] ? b[i+1] : i + 1);
    }
    cin >> q;
    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        if(b[l] > r){
            cout << "-1 -1\n";
        }else{
            cout << l+1 << ' ' << b[l] + 1 << '\n';
        }
    }
}
 
int main() 
{
    FastIO();
    int test_case = 1;
    cin >> test_case;
    while(test_case--) {
        solve();
    }
    return 0;
}
