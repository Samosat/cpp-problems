#include <iostream>
using namespace std;

int main()
{
    long long n,k;
    int ans,a,b,c;
    cin >> n >> k;
    
    a = n*2/k;
    if(n*2%k){
        a++;
    }
    b = n*5/k;
    if(n*5%k){
        b++;
    }
    c = n*8/k;
    if(n*8%k){
        c++;
    }
    ans = a+b+c;
    cout << ans << endl;
    return 0;
}