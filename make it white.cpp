// https://codeforces.com/contest/1927/problem/A
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
    string s;
    cin >> s;
    bool flag = false;
    int start_ind = 0, end_ind = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'B')
        {
            cnt++;
            if(flag)
            {
                end_ind = i;
            }else{
                flag = true;
                start_ind = i;
            }
        }
    }
    if(cnt == 1){
        cout << 1 << '\n';
        return;
    }
    if(cnt == 0){
        cout << 0 << '\n';
        return;
    }
    cout << abs(end_ind - start_ind) + 1 << '\n';
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
