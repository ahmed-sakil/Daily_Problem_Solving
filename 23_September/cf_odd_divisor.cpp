#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        int p = 0;
        for(long long i=1; pow(2, i)<=n; i++)
        {
            if(pow(2, i)==n)
            {
                cout << "NO\n";
                p++;
                break;
            }
        }
        if(p == 0){
            cout << "YES\n";
        }
    }

    return 0;
}   