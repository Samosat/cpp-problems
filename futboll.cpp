#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n = s.size();
    int x0 = 0, x1 = 0;
    if(s.size() >= 7){
    for(int i=0;i<n;i++){
        if(s[i] == 48){
            x0++;
        }
        if(s[i] == 49){
            x1++;
        }
        if(s[i] != 48){
            x0 = 0;
        }
        if(s[i] != 49){
            x1 = 0;
        }
        if(x0 == 7){
            cout << "YES";
            return 0;
        }
        if(x1 == 7){
            cout << "YES";
            return 0;
        }
    }
    }else{
        cout << "NO";
        return 0;
    }
    cout << "NO";
    return 0;
}