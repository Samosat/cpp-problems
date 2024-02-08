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

void solve() 
{
    int n;
    cin >> n;
    vector<int>a(n);
    string ans = "";
    char h = 'a';
    vector<int>cnt(26, 0);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == 0){
            ans += h;
            cnt[h-'a']++;
            h++;
        }else{
            for(int j = 0; j < 26; j++){
                if(cnt[j] == a[i]){
                    ans += (j + 'a');
                    cnt[j]++;
                    break;
                }
            }
        }
    }
    cout << ans << '\n';
}
 
int main() 
{
    FastIO();
    int test_case = 1;
    cin >> test_case;
    while (test_case--) 
    {
        solve();
    }
    return 0;
}