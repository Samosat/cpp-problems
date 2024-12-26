#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

#ifndef ONLINE_JUDGE
#define dbg(x) cerr << #x <<" "; print(x); cerr << endl;
#else
#define dbg(x)
#endif

void print(long long t) {cerr << t;}
void print(int t) {cerr << t;}
void print(string t) {cerr << t;}
void print(char t) {cerr << t;}
void print(double t) {cerr << t;}
void print(long double t) {cerr << t;}
void print(unsigned long long t) {cerr << t;}

template <class T, class V> void print(pair <T, V> p);
template <class T> void print(vector <T> v);
template <class T> void print(set <T> v);
template <class T, class V> void print(map <T, V> v);
template <class T> void print(multiset <T> v);
template <class T, class V> void print(T v[],V n) {cerr << "["; for(int i = 0; i < n; i++) {cerr << v[i] << " ";} cerr << "]";}
template <class T, class V> void print(pair <T, V> p) {cerr << "{"; print(p.first); cerr << ","; print(p.second); cerr << "}";}
template <class T> void print(vector <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
template <class T> void print(set <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
template <class T> void print(multiset <T> v) {cerr << "[ "; for (T i : v) {print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void print(map <T, V> v) {cerr << "[ "; for (auto i : v) {print(i); cerr << " ";} cerr << "]";}
template <class T> void print(queue <T> q) {cerr << "[ "; while(!q.empty()) {print(q.front()); cerr << " "; q.pop();} cerr << "]";}
template <class T> void print(priority_queue <T> q) {cerr << "[ "; while(!q.empty()) {print(q.top()); cerr << " "; q.pop();} cerr << "]";}
template <class T> void print(int n__, T arr[]) {cerr << "[ "; for(int i = 0; i <= n__; i++) {print(arr[i]); cerr << " ";} cerr << "]";}

#define pb push_back
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define no_ans cout << -1 << '\n'
#define ll long long
#define ppb pop_back
#define OK cout << "OK" << endl;
#define ld long double
#define all(v) (v).begin(), (v).end()
#define MP make_pair
#define PII pair <int, int>
#define lower lower_bound
#define upper upper_bound
#define endl '\n'
#define ull unsigned long long
 
void setIO(string name = "") {
	if (!name.empty()) {
		freopen((name + ".in").c_str(), "r", stdin);  
		freopen((name + ".out").c_str(), "w", stdout);
	}
}
void fastIO(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0); 
}
 
void setPrecision(int x){
    if(x == 0){
        return;
    }
    cout.setf(ios::fixed);
    cout.precision(x);
    return;
}

const int inf = 1e9, LOG = 31;
const ll inf64 = 1e18, mod = 1e9 + 7, wmod = 998244353;

const int N = 2e5 + 5;
int n, dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
char grid[4][N];

void solve(int TST_NUM){
    cin >> n;
    for(int i = 0; i <= 3; i++){
        for(int j = 0; j <= n + 1; j++){
            grid[i][j] = '#';
        }
    }
    for(int i = 1; i <= 2; i++){
        for(int j = 1; j <= n; j++){
            cin >> grid[i][j];
        }
    }
    bool flag = false;
    for(int i = 1; i <= n; i++){
        if(grid[1][i] == grid[2][i] && grid[1][i] == '#') continue;
        if(grid[1][i] == grid[2][i] && grid[1][i] == '.'){
            if(grid[1][i + 1] == '.' && grid[2][i + 1] == '.'){
                flag = true;
                i++;
            }
            continue;
        }
        if(grid[1][i] == '.'){
            if(grid[1][i + 1] != '.'){
                cout << "None\n";
                return;
            }
            else{
                grid[1][i + 1] = '#';
            }
            continue;
        }
        if(grid[2][i + 1] != '.'){
            cout << "None\n";
            return;
        }
        grid[2][i + 1] = '#';
    }
    if(flag) cout << "Multiple\n";
    else cout << "Unique\n";
}  
 
int main(){
    fastIO();
    setIO("");
    //setPrecision(20);
    
    int Tests = 1;
    cin >> Tests;

    int TST_NUM = 1;
    while(Tests--){
        solve(TST_NUM++);
    }
    return 0; 
} 
