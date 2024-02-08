// https://codeforces.com/contest/1927/problem/C?locale=en
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
    int n, m, k;
    cin >> n >> m >> k;
    set<int>s1, s2;
    vector<int>v(n), w(m);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin >> w[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(v[i] <= k)
        {
            s1.insert(v[i]);
        }
    }
    if(s1.size() < k / 2)
    {
        cout << "NO\n";
        return;
    }
    for(int i = 0; i < m; i++)
    {
        if(w[i] <= k)
        {
            s2.insert(w[i]);
        }
    }
    if(s2.size() < k/2)
    {
        cout << "NO\n";
        return;
    }
    for(auto i : s2)
    {
        s1.insert(i);
        if(s1.size() == k)
        {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
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