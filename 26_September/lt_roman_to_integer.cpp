#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    unordered_map<char, int> roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    string s;
    cin >> s;
    int x = s.length();

    int total=0;
    for(int i=0; i<x; i++)
    {
        if(i<x-1 && roman[s[i]] < roman[s[i+1]]){
            total -= roman[s[i]];
        }else{
            total += roman[s[i]];
        }
    }

    cout << total << "\n";
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