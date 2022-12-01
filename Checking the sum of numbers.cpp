#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
	int rad[1000];
	int n;
	cin >> n;
	string ans = "NO";
	for (int i=0; i < n; i++){
		cin >> rad[i];
    }
    for (int i=0; i < n; i++){
		if(rad[i] + rad[i+1] == rad[i+2]){
		    ans = "YES";
		}
    }
    cout << ans << endl;
	return 0;
}