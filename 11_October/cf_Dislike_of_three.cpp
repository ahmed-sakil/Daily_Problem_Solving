#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int k;
    cin >> k;

    int c = 0, n = 1;

    while (true){

        
        if (n % 3!= 0 && n % 10!= 3)
        {
            c++;
            if (c ==k)
            {
                cout << n << '\n';
                return;
            }


        }
        n++;

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