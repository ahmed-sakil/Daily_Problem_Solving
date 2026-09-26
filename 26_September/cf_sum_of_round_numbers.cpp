#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    int c = 0, m=n;
    while(m){
        int x = m%10;
        m = m/10;

        if(x!=0)
        {
            c++;
        }
    }

    cout << c << "\n";

    c = 1;
    while(n){
        int x = n%10;
        n = n/10;

        if(x!=0)
        {
            cout << x*c << " ";
        }
        c *= 10;
    }
    cout << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}