#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
#include <cassert>
#include <string>
#include <chrono>
#include <random>
#include <bitset>
#include <cstdio>
#include <vector>
#include <string>
#include <stack>
#include <tuple>
#include <queue>
#include <ctime>
#include <cmath>
#include <list>
#include <map>
#include <set>
using namespace std;

string s;
int n;
bool check(){
    int i;
    char cap,small;
    for(int i = 0;i < 26;i++){
        small = 'a' + i;
        cap = 'A' + i;
        if(s.find(small)==string::npos && s.find(cap) == string::npos){
            return false;
        }
    }
    return true;
}

int main()
{
    cin >> n >> s;
    if(check()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}