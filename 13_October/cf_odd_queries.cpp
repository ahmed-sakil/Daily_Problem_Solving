#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, q, i;

    cin >> n >> q;


    vector<long long> a(n + 1);
    vector<long long> p(n + 1, 0);


    for (i =1; i <=n; i++)
    {
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }



    while (q--)
    {


        long long l, r, k;
        cin >> l >> r >> k;

        long long x = p[r] - p[l - 1];

        long long y = (r - l + 1) * k;


        long long z = p[n] - x + y;
        if (z % 2 != 0)
        {
            cout << "YES\n";
        }else
        {
            cout << "NO\n";
        }


    }
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}