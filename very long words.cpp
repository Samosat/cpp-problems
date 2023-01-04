#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int t,n;
    cin >> t;
	char s[105];
	for(;t;--t){ 
      cin >> s;
      n = strlen(s);
    if(n <= 10){
       cout << s << endl;
    }else{
       cout << s[0] << n - 2 << s[n - 1] << endl;
   }
   }
	return 0;
}