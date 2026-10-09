#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long n, k, x;
    cin >> n >> k >> x;


    long long min_sum = k * (k + 1) / 2;
    long long max_sum = k * (2 * n - k + 1) / 2;



    if (x >= min_sum && x <= max_sum)
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
    cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}