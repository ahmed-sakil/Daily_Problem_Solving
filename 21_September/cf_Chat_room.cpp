#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int x = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'h' && x == 0)
        {
            x++;
        }
        else if (str[i] == 'e' && x == 1)
        {
            x++;

        }
        else if (str[i] == 'l' && (x == 2 || x == 3))
        {
            x++;

        }
        else if (str[i] == 'o' && x == 4)
        {
            x++;

        }
    }

    if (x == 5)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}