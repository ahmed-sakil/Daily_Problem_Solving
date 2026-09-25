#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    int p;
    vector<int> a(n, 0);

    cin >> p;
    for(int i=0; i<p; i++)
    {
        int x;
        cin >> x;
        a[x-1]++;
    }

    int q;

    cin >> q;
    for(int i=0; i<q; i++)
    {
        int x;
        cin >> x;
        a[x-1]++;
    }

    for(int i =0; i<n; i++)
    {
        if(a[i]==0){
            cout << "Oh, my keyboard!\n";
            return;
        }
    }
    cout << "I become the guy.\n";
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