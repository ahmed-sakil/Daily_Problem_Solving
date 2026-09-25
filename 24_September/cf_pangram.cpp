#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(),::toupper);


    vector<int> a(26, 0);
    for(int i=0; i<s.length(); i++)
    {
        int x = s[i]-'A';
        a[x]++;
    }


    for(int i=0; i<26; i++)
    {
        if(a[i]==0){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    // cin >> test_cases;

    while (test_cases--)
    {
        solved_by_sakil();
    }

    return 0;
}