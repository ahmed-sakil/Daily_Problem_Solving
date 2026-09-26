#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    char c;
    cin >> n;
    cin >> c;

    string s;
    cin >> s;

    int x = (n+1)/2;

    int coin = 0;

    for(int i=0; i<x; i++)
    {
        if(s[i] == s[n-1-i]){
            continue;
        }else{
            if(s[i]!=c){
                coin++;
            }
            if(s[n-1-i]!=c){
                coin++;
            }
        }
    }
    cout << coin << "\n";
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