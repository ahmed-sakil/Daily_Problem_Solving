#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;


    vector<long long> cnt(100001, 0);

    int mx = 0;
    for (int i =0; i <n; i++){
        int x;

        cin >> x;

        cnt[x]++;

        mx = max(mx, x);
    }


    vector<long long> dp(mx + 1, 0);
    dp[0] = 0;
    dp[1] = cnt[1] * 1;


    for (int i = 2; i <= mx; i++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + (long long)i * cnt[i]);
    }


    cout << dp[mx] << '\n';

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