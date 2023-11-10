#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int lucum(string a, string b){
    for(int i = 0; i < a.size(); i++){
        if(a[i] > b[i]){
            return 1;
        }
        if(a[i] < b[i]){
            return -1;
        }
    }
    return 0;
}
int main()
{
    string s;
    string t;
    getline(cin,s);
    getline(cin,t);
    for(int i = 0; i < s.size(); i++){
        if(s[i] > 64 && s[i] < 91){
            s[i] += 32;
        }
    }
    for(int i = 0; i < t.size(); i++){
        if(t[i] > 64 && t[i] < 91){
            t[i] += 32;
        }
    }
    int ans = lucum(s,t);
    cout << ans << endl;
    return 0;
}
