#include <iostream>
using namespace std;
int stugum(int b){
    int k = 0;
    int h = 0;
    int y = b;
    int z = 1;
    int m[30] = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,2,7};
    for (int i = b;i > 0; i/=10){
        y = y / 10;
        k++;
    }
    for (int i = 0;i < k; i++){
        z *= 10;
    }
    for (int i = 0;i < k; i++){
        if(m[i] == b/z){
            z %= 10;
            b %= 10;
            h++;
        }
    }
    return h;
}
int main()
{
    int n[1000];
    int t,g=0;
    cin >> t;
    for(int i = 0;i < t;i++){
        cin >> n[i];
    }
    for(int i = 0;i < t;i++){
        g = stugum(n[i]);
        cout << g << endl;
    }
    return 0;
}