#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    string s;
    cin >> s;


    int n = s.size();


    int x = 0;
    int y = 0;


    for (int i = 1; i <= n - 2; i++)
    {


        if (s[i - 1] == s[i] && s[i] == s[i + 1])
        {
            x++;
        }

        if (s[i - 1] != s[i] && s[i] != s[i + 1])
        {
            y++;
        }

        
    }


    int c = 1;
    if (x!=0)
        c++;

    if (y!=0)
        c++;


    cout << c << '\n';
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