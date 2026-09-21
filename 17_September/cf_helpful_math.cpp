#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    int one = 0, two = 0, three = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            one++;
        }
        else if (str[i] == '2')
        {
            two++;
        }
        else if (str[i] == '3')
        {
            three++;
        }
    }

    for (int i = 0; i < one; i++)
    {
        cout << "1";
        if (i != one - 1 || two > 0 || three > 0)
            cout << "+";
    }

    for (int i = 0; i < two; i++)
    {
        cout << "2";
        if (i != two - 1 || three > 0)
            cout << "+";
    }

    for (int i = 0; i < three; i++)
    {
        cout << "3";
        if (i != three - 1)
            cout << "+";
    }

    cout << endl;

    return 0;
}