#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<int> a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());

    for(int i=0; i<n-1; i++)
    {
        if(a[i+1]-a[i]>1)
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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