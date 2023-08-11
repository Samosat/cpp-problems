#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int n;
    string s;
    string t = "codeforces";
    int ans = 0;
    cin >> n;
    for(int i = 0;i < n;i++){
        cin >> s;
        for(int j = 0;j < s.size();j++){
            if(s[j] != t[j]){
                ans++;
        }
    }  
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}