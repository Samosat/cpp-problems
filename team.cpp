#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    int n, a, b, c;
    int ans = 0;
    cin >> n;
	for(int i = 0; i < n; i++){
	   cin >> a >> b >> c;
	   if(a + b + c >= 2){
	       ans++;
	   }
	}
	cout << ans << endl;
	return 0;
}