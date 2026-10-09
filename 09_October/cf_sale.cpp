#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, m;
    cin >> n >> m;

    vector<int> a;

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);

    }

    sort(a.begin(), a.end());

    int c=0;
    for(int i=0; i<m; i++)
    {
        if(a[i]>=0)
        {
            break;
        }
        c += a[i];
    }

    cout << abs(c) << "\n";
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