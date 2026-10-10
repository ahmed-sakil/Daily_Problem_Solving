#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    char c;
    string s;

    cin >> c;
    cin >> s;

    string letters = "qwertyuiopasdfghjkl;zxcvbnm,./";

    int x = s.length(), i, j;
    for (i =0; i <x; i++)
    {
        for (j =0; j< letters.length(); j++)
        {

            if (s[i] == letters[j])
            {

                if (c == 'R')
                {
                    s[i] = letters[j - 1];
                }
                else
                {
                    s[i] = letters[j + 1];
                }

                break;
            }
        }
    }

    cout << s << endl;
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