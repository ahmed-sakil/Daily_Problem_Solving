#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long n;
    cin >> n;


    int c2 = 0;
    int c3 = 0;


    while (n % 2 ==0){
        c2++;
        n /= 2;

    }


    while (n % 3 ==0){
        c3++;
        n /=3;

    }



    if (n > 1 || c2 > c3)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << (2 * c3 - c2) << '\n';
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