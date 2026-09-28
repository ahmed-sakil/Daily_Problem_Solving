#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int a[26] = {0};
    int b[26] = {0};

    int x = s3.length();
    if(x==(s1.length()+s2.length())){
        for(int i=0; i<s1.length(); i++)
        {
            int y = s1[i]-'A';
            a[y]++;
        }
        for(int i=0; i<s2.length(); i++)
        {
            int y = s2[i]-'A';
            a[y]++;
        }
        for(int i=0; i<x; i++)
        {
            int y = s3[i]-'A';
            b[y]++;
        }

        for(int i=0; i<26; i++)
        {
            if(a[i]!=b[i]){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
    }else{
        cout << "NO\n";
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