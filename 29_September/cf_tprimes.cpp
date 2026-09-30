#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{

    long long n;
    cin >> n;
    long long x = sqrt(n);

    if(x*x!=n || n==1 || n==2){
        cout << "NO\n";
        return;
    }

    int c = 3;
    for(int i=2; i<x-1; i++){
        if(n%i==0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
