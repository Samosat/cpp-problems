// problem - https://codeforces.com/problemset/problem/1077/A?locale=en
#include <iostream>
using namespace std;

int main()
{
    long long int a,b,k,d;
    long long int ans;
    int t;
    cin>>t;
    while(t--)
    {
        ans=d=0;
        cin>>a>>b>>k;
        if(k%2==1){
            d=(k/2)+1;
        }else{
            d=k/2;
        }
        ans=(d*a)-((k-d)*b);
        cout<<ans<<endl;
    }
    return 0;
}