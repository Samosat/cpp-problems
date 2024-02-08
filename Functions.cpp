#include <bits/stdc++.h>
using namespace std;
#define ll long long
// Quick sort for vector

void qsortv(vector<ll>& v, ll b0, ll e0)
{
    ll d = v[e0];
    ll b = b0;
    ll e = e0;
    do
    {
        while (v[b] < d)
            ++b;
        while (v[e] > d)
            --e;
        if (b <= e)
        {
            swap(v[b], v[e]);
            ++b;
            --e;
        }
    } while (b <= e);
    if (e > b0)
        qsortv(v, b0, e);
    if (b < e0)
        qsortv(v, b, e0);
}

// Return a^b

long long power(int a, int b)
{
    long long res = 1;
    while(b--)
    {
        res*=a;
    }
    return res;
}

// Checks if n is prime

bool check(int n)
{
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

bool is_prime[100001];

// from 2-th system to 10 system

ll toten(string s)
{
    int q = s.size() - 1;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += ((s[i] - '0') * pow(2, q));
        q--;
    }
    return ans;
}

// Sieve of Eratostenese with Time complexity O(n Log n)

const int N = 1e7;
vector<int>v[N+1];
vector<int>prime_divisors_to_N[N+1];
bool issprime[N+1];
bool prime[N+1];
void eratostenes()
{
    for(int i = 2; i <= N;i++)
    {
        prime[i] = true;
    }
    for(int i = 2; i <= N; i++)
    {
        if(prime[i] == true)
        {
            for(int j = i; j <= N; j+=i)
            {
                prime[j] = false;
                prime_divisors_to_N[j].push_back(i);
            }
        }
    }
}
bool used[N+1];
int cnt[N+1];

// sieve of Eratostenes with Time complexity O(N)

vector<int>pr;
vector<int>lp(N+1);

void linear_eratostense()
{
    for (int i=2; i <= N; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j) {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i]) {
                break;
            }
        }
    }
}

// finds the smallest digit of number

int min_of_digits(int n)
{
    int mi = INT_MAX;
    while(n)
    {
        int m = n%10;
        if(m < mi)
        {
            mi = m;
        }
        n/=10;
    }
    return mi;
}

//removes all substrings from string

string removesub(string s, string p) 
{
    string ans;
    for (auto a : s)
    {
        ans.push_back(a);
        if (ans.size() >= p.size() && ans.substr(ans.size() - p.size()) == p)
        {
            size_t x = p.size();
            while (x--)
            {
                ans.pop_back();
            }
        }
    }
    return ans;
}

// checks if the digits of n are same

bool has_same_digits(int n)
{
    int m = n%10;
    n/=10;
    while(n)
    {
        if(n%10 != m)
        {
            return false;
        }
        n/=10;
    }
    return true;
}

// check if the digits of two numbers are same

bool digits_are_same(int i,int j)
{
    int m =  j % 10;
    while(i)
    {
        if(i%10!=m)
        {
            return false;
        }
        i/=10;
    }
    return true;
}

bool has_same_digit[101];

vector<pair<int,int>>pa;

vector<double>koghm;

vector<string>palindroms = {};

// from 10-th system to 2 system

string to_two(int n)
{
    string s = "";
    while(n)
    {
        s += ((n%2)+'0');
        n/=2;
    }
    return s;
}

//number of odds in pascal's triangle

int numberofones(int N){
    int a=0;
    while(N>0){ 
        
        a = a + (N&1);       
        N = N>>1;
    }
    return a;
}
int numberofodds(int N){
    int x;
    x=numberofones(N);
    
    int ans;
    ans=pow(2,x);
    
    return ans;
}

//gcd of range [l, r]

int a[1001], n, q;
int st[1001][25];

void buildSparseTable() {
    for (int i = 0; i < n; i++)
        st[i][0] = a[i];
    for (int j = 1; (1 << j) <= n; j++)
        for (int i = 0; i + (1 << j) <= n; i++)
            st[i][j] = __gcd(st[i][j - 1], st[i + (1 << (j - 1))][j - 1]);
}

int rangeGCD(int l, int r) {
    int k = log2(r - l + 1);
    return __gcd(st[l][k], st[r - (1 << k) + 1][k]);
}

// LCM of range [l, r]
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}
 
vector<int> rangeLcmQueries(vector<int>& arr, vector<pair<int, int>>& queries) {
    vector<int> results;
    for (const auto& query : queries) {
        int l = query.first;
        int r = query.second;
        int lcmVal = arr[l];
        for (int i = l + 1; i <= r; i++) {
            lcmVal = lcm(lcmVal, arr[i]);
        }
        results.push_back(lcmVal);
    }
    return results;
}

// Find fibaonacci N-th number fast

string decimal_to_bin(int n)
{
    string bin = bitset<sizeof(int) * 8>(n).to_string();
    auto loc = bin.find('1');
    if (loc != string::npos)
        return bin.substr(loc);
    return "0";
}
long long fastfib(int n)
{
    string bin_of_n
        = decimal_to_bin(n);
 
    long long f[] = { 0, 1 };
    for (auto b : bin_of_n) {
        long long f2i1
            = f[1] * f[1] + f[0] * f[0];
        long long f2i = f[0] * (2 * f[1] - f[0]);
 
        if (b == '0') {
            f[0] = f2i;
            f[1] = f2i1;
        }
        else {
            f[0] = f2i1;
            f[1] = f2i1 + f2i;
        }
    }
 
    return f[0];
}

int ceil_division(long long x, long long y)
{
    return (x + y - 1) / y;
}

void precision(int x)
{
	cout.setf(ios::fixed | ios::showpoint);
	cout.precision(x);
	return;
}
 
ll gcd(ll a, ll b)
{
	while (b) {
		a %= b;
		swap(a, b);
	}
	return a;
}
 
ll lcm(ll a, ll b)
{
	return a / gcd(a, b) * b;
}
 
bool is_prime(ll a)
{
	if (a == 1) {
		return false;
	}
	for (ll i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return false;
		}
	}
	return true;
}
 
bool is_square(ll a)
{
	ll b = ll(sqrt(a));
	return (b * b == a);
}
 
bool is_cube(ll a)
{
	ll b = ll(cbrt(a));
	return (b * b * b == a);
}
 
int digit_sum(ll a)
{
	int sum = 0;
	while (a) {
		sum += int(a % 10);
		a /= 10;
	}
	return sum;
}
 
ll binpow(ll a, int b)
{
	ll ans = 1;
	while (b) {
		if ((b & 1) == 1) {
			ans *= a;
		}
		b >>= 1;
		a *= a;
	}
	return ans;
}
 
ll binpow_by_mod(ll a, ll b, ll mod)
{
	ll ans = 1;
	while (b) {
		if ((b & 1) == 1) {
			ans *= a;
			ans %= mod;
		}
		b >>= 1;
		a *= a;
		a %= mod;
	}
	return ans;
}
 
ll factorial(int a)
{
	ll ans = 1;
	for (int i = 2; i <= a; i++) {
		ans *= ll(i);
	}
	return ans;
}
 
ll factorial_by_mod(int a, ll mod)
{
	ll ans = 1;
	for (int i = 2; i <= a; i++) {
		ans *= ll(i);
		ans %= mod;
	}
	return ans;
}

ll eryakneriqanak(ll n)
{
    if(n < 3)
    {
        return 0;
    }
    return (n*(n-1)*(n-2))/6;
}

map<ll, ll> m;

void fill_from_l_to_r_range_by_x(ll l, ll r, ll x)
{
    m[l]+=x;
    m[r+1]-=x;
}

// substring count

ll countSubstring(const string str, const string sub)
{
	if (sub.length() == 0) return 0;
	ll count = 0;
	for(int i = 0; i < str.size() - sub.size() + 1; i++) 
    {
        int ok = 1;
        for(int j = i; j < i + sub.size(); j++) 
        {
            if(str[j] != sub[j - i]) 
            {
                ok = 0;
                break;
            }
        }
        count += ok;
    }
    return count;
}

// amboxj kordinatneri qanaky ughi vra
ll func(ll x1, ll y1, ll x2, ll y2)
{
    return __gcd(abs(x1 - x2), abs(y1 - y2)) + 1;
}

// erankyan makeresy yst gagatneri kordinatneri
double area(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3)
{
    return 0.5*abs((x2 - x1)*(y3 - y1) - (x3 - x1)*(y2 - y1));
}

//number of ways to represent n by sum of k prime numbers
bool check(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int countWays(int n, int k) 
{
    vector<int> v;
    for (int i = 2; i <= n; ++i) 
    {
        if (check(i)) 
        {
            v.push_back(i);
        }
    }
    int dp[n + 1][k + 1];
    fill(&dp[0][0], &dp[0][0] + sizeof(dp) / sizeof(dp[0][0]), 0);
    dp[0][0] = 1;
    for (int p : v) 
    {
        for (int i = n; i >= p; --i) 
        {
            for (int j = 1; j <= k; ++j) 
            {
                dp[i][j] += dp[i - p][j - 1];
            }
        }
    }
    return dp[n][k];
}
//count palindromes by deleting som letters
ll countPalindromes(const string& word) 
{
    int n = word.length();
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    for (int len = 1; len <= n; len++) 
    {
        for (int i = 0; i + len - 1 < n; i++) 
        {
            int j = i + len - 1;
            if (len == 1) 
            {
                dp[i][j] = 1;
            } else if (len == 2) 
            {
                dp[i][j] = (word[i] == word[j]) ? 3 : 2;
            } else 
            {
                dp[i][j] = dp[i + 1][j] + dp[i][j - 1] - dp[i + 1][j - 1] + ((word[i] == word[j]) ? dp[i + 1][j - 1] + 1 : 0);
            }
        }
    }
    return dp[0][n - 1];
}

#define INF 0x3f3f3f3f

typedef pair<int, int> iPair;
const int N = 1e5 + 10;
vector<pair<int, int> > adj[N];
int n, m;
void shortestPath(int src)
{
	priority_queue<iPair, vector<iPair>, greater<iPair> >
		pq;
	vector<int> dist(N, INF);
	pq.push(make_pair(0, src));
	dist[src] = 0;
	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		vector<pair<int, int> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i) {
			int v = (*i).first;
			int weight = (*i).second;
			if (dist[v] > dist[u] + weight) {
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans += dist[i];
    }
    cout << ans << '\n';
}

int phi(int n)
{
    float result = n; 
    for(int p = 2; p * p <= n; ++p)
    {
        if (n % p == 0)
        {
            while (n % p == 0)
                n /= p;
                 
            result *= (1.0 - (1.0 / (float)p));
        }
    }
    if (n > 1)
        result -= result / n;
    return (int)result;
}

// amenamec tivy vor chenq karogh nerkayacnel am + bn tesqov trvac m, n hamar
ll fun(ll m, ll n)
{
    return lcm(m, n) - m - n;
}
