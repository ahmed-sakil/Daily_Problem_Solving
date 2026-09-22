#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;
    int c = 0, mx=0;
    while(n--)
    {
        int a, b;
        cin >> a >> b;

        c -= a;
        c += b;

        mx = max(c, mx);
        
    }
    cout << mx << "\n";


    return 0;
}