#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s;
    cin >> s;

    int x = s.length();

    int capital = 0;

    for(int i =0; i<x; i++)
    {
        if(s[i]>='A' && s[i]<='Z'){
            capital++;
        }
    }

    if(capital == x){
        transform(s.begin(), s.end(), s.begin(),::tolower);
        cout << s << "\n";
    }else if(capital == x-1 && (s[0]>='a' && s[0]<='z')){
        transform(s.begin(), s.end(), s.begin(),::tolower);
        s[0] = toupper(s[0]);
        cout << s << "\n";
    }else{
        cout << s << "\n";
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