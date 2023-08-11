#include <iostream>
#include <string>
using namespace std;

int stugum(string a){
    int k = a.size() - 4;
    string y = "MOO";
    if(a[2] != 'O'){
        return -1;
    }
    for(int j = 1; j < 4; j++){
        if(a[j+1] != y[j]){
            k++;
        }
    }
    return k;
}
int main()
{
    int q;
    cin >> q;
    string s;
    for(int i = 0; i < q; i++){
        getline(cin,s);
        if(stugum(s) == -1){
            cout << -1 << endl;
        }
        else{
            cout << stugum(s) << endl;
        }
    }
    return 0;
}
