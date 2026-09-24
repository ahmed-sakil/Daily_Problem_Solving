#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, c=0, x, prv=-1;

    cin >> n;

    while(n--)
    {   
        cin >> x;

        if(x==prv)
        {
            continue;
        }else{
            c++;
            prv = x;
        }
    }
    cout << c << "\n";

    return 0;
}