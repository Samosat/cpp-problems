//problem - https://codeforces.com/problemset/problem/460/A?locale=en
#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >>n>>m;
    int mij;
    mij = (n - 1) / (m - 1);
    int ans = n + mij;
    cout << ans <<endl;
    
    return 0;
}