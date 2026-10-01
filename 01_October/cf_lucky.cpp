#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s;
    cin >> s;

    int a = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
    int b = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

    if(a == b)
        cout << "YES\n";
    else
        cout << "NO\n";
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