#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	int rad[10000];
	int n;
	cin >> n;
	int ans=1;
	for (int i=0; i < n; i++){
		cin >> rad[i];
    }
    rad[n]=rad[n-1];
    for (int i=0; i < n; i++){
        if(rad[i] != rad[i+1]){
	    ans++;
    }
    }
    cout << ans << endl;
	return 0;
}