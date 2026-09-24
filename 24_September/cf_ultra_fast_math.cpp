#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil(){
    string s, s1;
    cin >> s >> s1;

    int x = s.length();

    for(int i =0; i<x; i++)
    {
        if(s[i]==s1[i]){
            cout << 0;
        }
        else{
            cout << 1;
        }
    }
    cout << "\n";
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