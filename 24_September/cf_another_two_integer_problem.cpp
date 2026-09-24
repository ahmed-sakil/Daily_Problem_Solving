#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long a, b;
    cin >> a >> b;
    long long x = abs(a-b);

    if(x%10==0){
        cout << x/10 << "\n";
    }else{
        cout << x/10+1 << "\n";
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