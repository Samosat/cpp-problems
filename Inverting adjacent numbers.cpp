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
    rad[n]=rad[n-1];
    for (int i=0; i < n; i++){
        if(i%2==0){
	    swap(rad[i],rad[i+1]);
    }
    }
     for (int i=0; i < n; i++){
	    cout << rad[i] << " ";
    }
	return 0;
}