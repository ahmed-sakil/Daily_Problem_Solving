#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, k;
    cin >> n >> k;

    if(n%2==0)
    {
        if(k<=n/2)
        {
            cout << (k*2)-1 << "\n";
        }
        else{
            cout << (k-(n/2))*2 << "\n";
        }
    }
    else{
        if(k<=(n/2)+1)
        {
            cout << (k*2)-1 << "\n";
        }
        else{
            cout << (k-((n/2)+1))*2 << "\n";
        }
    }

    return 0;
}