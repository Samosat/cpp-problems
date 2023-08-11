#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n = s.size();
    if(s[0] > 96 && s[0] < 123){
        s[0] -= 32;
    }
    cout << s;
    return 0;
}