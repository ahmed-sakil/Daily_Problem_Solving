#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s;
    cin >> s;

    for(int i =0; i<s.length(); i++)
    {
        if(s[i]=='.')
        {
            cout << 0;
        }else if(s[i+1]=='.')
        {
            cout << 1;
            i++;
        }else{
            cout << 2;
            i++;
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