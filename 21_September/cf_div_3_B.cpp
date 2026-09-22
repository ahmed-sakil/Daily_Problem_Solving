#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int t;
    cin >> t;

    while(t--)
    {
        long long int a,b,c;

        cin >> a >> b >> c;

        long long int x1 = abs(a-b);
        long long int x2 = abs((a+c)-b);
        cout << max(x1, x2) << "\n";
    }

    return 0;
}