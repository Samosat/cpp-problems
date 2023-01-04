#include <iostream>
using namespace std;
int main()
{
	int i,j;
	int arr[4][4];
	int sum = 0, sum2 = 0;
	int gum = 0, gum2 = 0;
	for (i = 0; i < 4; i++){
		for (j = 0; j < 4; j++){
			cin >> arr[i][j];
		}
	}
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			sum = sum + arr[j][i];
		}
		if(sum >= gum){
		    gum = sum;
	}
	sum = 0;
	}
	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 4; ++j) {
			sum2 = sum2 + arr[i][j];
		}
		if(sum2 >= gum2){
		    gum2 = sum2;
	}
	sum2 = 0;
	}
	cout <<gum << " " << gum2;
	return 0;
}	