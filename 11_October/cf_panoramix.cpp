#include<bits/stdc++.h>
using namespace std;

bool is_prime(int x)
{
    if (x < 2)
        return false;


    for (int i = 2; i * i <= x; i++)
    {

        if (x % i == 0)
            return false;
    }


    return true;
}


void solved_by_sakil()
{
    int n, m;
    cin >> n >> m;

    int nxt = -1, i;
    for (i = n + 1; ; i++)
    {

        if (is_prime(i))
        {
            nxt = i;
            break;
        }
    }


    if (nxt == m)
    {
        cout << "YES\n";
    }else
    {
        cout << "NO\n";
    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    //cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}