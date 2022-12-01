#include <iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int a = 1;
    int ns = 1;
    int s = 1;
    for(int i = 1; i <= n; i++){
        a *= i;
}
    for(int j = 1; j <= k; j++){
        ns *= j;
}
    for(int h = 1; h <= (n - k); h++){
        s *= h;
}
    int ans = a/(ns*s);
    cout << ans << endl;
    return 0;
}
