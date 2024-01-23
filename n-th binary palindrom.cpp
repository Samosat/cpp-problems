#include <bits/stdc++.h>
using namespace std;
 
int convertStringToInt(string s)
{
    int num = 0;
    for (int i = 0; i < s.size(); i++) {
        num = num * 2 + (s[i] - '0');
    }
    return num;
}

int getNthNumber(int n)
{
    if (n == 1)
        return 1;
    n--;
    queue<string> q;
    q.push("11");
    while (!q.empty()) {
        string curr = q.front();
        q.pop();
        n--;
        if (!n) {
            return convertStringToInt(curr);
        }
 
        int mid = curr.size() / 2;
        if (curr.size() % 2 == 0) {
            string s0 = curr, s1 = curr;
            s0.insert(mid, "0");
            s1.insert(mid, "1");
            q.push(s0);
            q.push(s1);
        }
        else {
            string ch(1, curr[mid]);
            string temp = curr;
            temp.insert(mid, ch);
            q.push(temp);
        }
    }

    return 0;
}
 
int main(){
    int n;cin >> n;
    cout << getNthNumber(n);
}
