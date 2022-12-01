#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int main() {
	int rad[10000];
	int n;
	cin >> n;
	for (int i=0; i < n; i++){
		cin >> rad[i];
    }
    for (int i=0; i < n/2; i++){
	    swap(rad[i],rad[n-i-1]);
    }
     for (int i=0; i < n; i++){
	    cout << rad[i] << " ";
    }
	return 0;
}