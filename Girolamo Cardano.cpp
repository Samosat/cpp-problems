//Armenian Olympiads in Informatics regional 2017-2018
//Girolamo Cardano problem N2
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    char a[n][n],h[n*n],turned[n][n];
    char patrast[n][n];
    int cnt = 0;
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            cin >> a[i][j];
            patrast[i][j] = '.';
        }
    }
    for(int i = 0; i < n*n;i++){
        cin >> h[i];
    }
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            if(a[i][j] == '.'){
                patrast[i][j] = h[cnt];
                cnt++;
            }
        }
    }
    
    
    for(int k = 0; k < 3;k++){
        for(int i = 0; i < n;i++){
            for(int j = 0;j < n;j++){
                turned[j][n-i-1] = a[i][j];
            }
        }
        for(int i = 0; i < n;i++){
            for(int j = 0;j < n;j++){
                a[i][j] = turned[i][j];
            }
        }
      for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            if(a[i][j] == '.'){
                patrast[i][j] = h[cnt];
                cnt++;
            }
        }
      }
        
    }
    for(int i = 0; i < n;i++){
        for(int j = 0;j < n;j++){
            cout << patrast[i][j];
        }
    }
    return 0;
}