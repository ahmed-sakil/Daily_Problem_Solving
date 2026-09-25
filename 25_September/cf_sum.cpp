#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    double a, b, c;
    cin >> a >> b >> c;

    double x = (a+b+c)/2.0;
    if(x==a || x==b || x==c){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
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