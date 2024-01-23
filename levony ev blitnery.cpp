#include <bits/stdc++.h>
using namespace std;

int maxt(int x, int y, int z){
    int mn = min({x,y,z});
    int ans = x+y+z-mn;
    return ans;
}

int main(){
    int n,p,h,ans = 0;
    cin >> n >> p;
    map<int,int> mp;
    int d[n],v[n];
    // int d[n] = {1000, 2000, 3000, 4000, 5000};
    // int v[n] = {12, 1, 3, 100, 101};
    
    for(int i = 0; i < n;i++){
        cin >> d[i];
    }
    for(int i = 0; i < n;i++){
        cin >> v[i];
    }
    for(int i = 0;i < n;i++){
        mp[v[i]] = d[i];
    }
    // for(auto i  = mp.begin();i != mp.end(); i++){
    //     cout << i->first << ' ' << i->second << '\n';
    // }
    int a1 = mp.rbegin()->first;
    int a2 = mp.rbegin()->second;
    // cout << mp.rbegin()->first << ' ' << mp.rbegin()->second + 1;
    mp.erase(std::prev(mp.end()));
    int b1 = mp.rbegin()->first;
    int b2 = mp.rbegin()->second;
    // for(auto i  = mp.begin();i != mp.end(); i++){
    //     cout << i->first << ' ' << i->second << '\n';
    // }
    mp.erase(std::prev(mp.end()));
    int c1 = mp.rbegin()->first;
    int c2 = mp.rbegin()->second;
    if(maxt(a2,b2,c2) <= p){
        cout << a1+b1+c1 << '\n';
        return 0;
    }
    for(int i = 0;i < n;i++){
        a1 = b1;
        a2 = b2;
        b1 = c1;
        b2 = c2;
        mp.erase(std::prev(mp.end()));
        int c1 = mp.rbegin()->first;
        int c2 = mp.rbegin()->second;
        if(maxt(a2,b2,c2) <= p){
            cout << a1+b1+c1 << '\n';
            return 0;
        }
        
        if(mp.size() <= 2){cout << -1 << endl;return 0;}
    }
    cout << -1 << endl;
    // cout << maxt(a2,b2,c2);
    // for(int i = n;i > 2;i--){
    //     if(maxt(d[mp[v[i]]],d[mp[v[i-1]]],d[mp[v[i-2]]]) <= p){
    //         ans = v[i]+v[i-1]+v[i-2];
    //         cout << ans << '\n';
    //         return 0;
    //     }
    // }
    // cout << -1 << '\n';
    return 0;
}


