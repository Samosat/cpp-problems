#include <iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a <= b){
   for(int i=a;i <= b;i++){
        if(i % d == c){
            cout << i << " ";
    }
    }
    }else{
        for(int i=b;i <= a ;i++){
        if(i % d == c){
            cout << i << " ";
    }
    }
    }
    
    return 0;
}