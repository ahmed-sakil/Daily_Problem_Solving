#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int litr = k*l;
    nl = litr/nl;
    nl = nl/n;

    c= (c*d);
    c= c/n;

    p = p/np;
    p = p/n;

    cout << min(nl, min(c, p)) << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    //cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}