#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    long long ln;
    cin >> n >> ln;

    vector<long long> l(n);

    for(int i =0; i<n; i++){
        cin >> l[i];
    }

    sort(l.begin(), l.end());

    double ans = 0;
    ans = max(ans, (double)l[0]);
    ans = max(ans, (double)(ln - l[n - 1]));

    for(int i = 1; i < n; i++){
        double gap = (l[i] - l[i - 1]) / 2.0;
        ans = max(ans, gap);
    }

    cout << fixed << setprecision(10);
    cout << ans << '\n';
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