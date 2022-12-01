#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int g;
    int p = 0;
    int m = 0;
    int z = 0;
    for (int i = 0; i < n; i++){
    cin >> g;
    if(g < 0){
        m++;
    }
    if(g > 0){
        p++;
    }
    if(g==0){
        z++;
    }
}
cout << z << " " << p << " " << m << endl;
return 0;
}
