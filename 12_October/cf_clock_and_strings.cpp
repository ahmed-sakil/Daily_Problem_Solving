#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;


    string s = "";

    for (int i =1; i <= 12; i++)
    {
        if (i ==a || i ==b)
        {
            s += 'A';
        }else if (i == c || i == d)
        {
            s += 'B';
        }
    }


    if (s == "ABAB" || s == "BABA")
    {
        cout << "YES\n";
    }else
    {
        cout << "NO\n";
    }
    
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    cin >> test_cases;

    while (test_cases--)
    {
        solved_by_sakil();
    }

    return 0;
}