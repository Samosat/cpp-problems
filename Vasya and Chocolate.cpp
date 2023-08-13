//problem - https://codeforces.com/problemset/problem/1065/A?locale=en
#include <iostream>
using namespace std;

int main()
{
    long long a,b,s,c;
    long long ans,can_buy,d;
    int t;
    cin>>t;
    while(t--)
    {
        d = can_buy = ans = 0;
        cin>>s>>a>>b>>c;
        can_buy = s/c;
        d = can_buy/a;
        ans = (d*a) + (d*b);
        ans +=(can_buy%a);
        
        cout<<ans<<endl;
    }
    return 0;
}
