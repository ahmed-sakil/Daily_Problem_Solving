#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s;
    getline(cin, s);

    int x = s.length();

    vector<int> a(26, 0);

    for(int i=0; i<x; i++)
    {
        if(s[i]>='a' && s[i]<='z'){
            int y = s[i]-'a';
            a[y]++;
        }
    }

    int c=0;
    for(int i=0; i<26; i++)
    {
        if(a[i]!=0){
            c++;
        }
    }

    cout << c << "\n";

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