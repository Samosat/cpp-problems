#include <iostream>
#include<string>
using namespace std;
int lucum(string a,int b){
    for(int i=0;i<b;i++){
    if(a[i] == 97){
        a[i] = 48;
    }
    if(a[i] == 98){
        a[i] = 49;
    }
    if(a[i] == 99){
        a[i] = 49;
    }
    }
    for(int i=1;i<b-1;i++){
        if(a[i] == a[i+1] || a[i] == a[i-1]){
        return "NO";
    }
    }
    return "YES";
}
int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
        int n;
        cin >> n;
        string s;
        getline(cin,s);
        cout << lucum(s,n);
    }
    return 0;
}