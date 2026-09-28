#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    long long c=0;

    while(n--)
    {
        int x;
        cin >> x;

        c+=x;
    }
    if(c<0){
        cout << abs(c) << "\n";
    }else{
        cout << 0 << "\n";
    }
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