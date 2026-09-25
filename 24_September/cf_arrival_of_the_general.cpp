#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<int> a;

    int mx = -1, mx_ind, mn = 99999, mn_ind;

    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);

        if(x>mx){
            mx = x;
            mx_ind = i;
        }

        if(x<=mn){
            mn = x;
            mn_ind = i;
        }
    }

    int c = mx_ind+((n-1)-mn_ind);

    if(mx_ind > mn_ind){
        c--;
    }

    cout << c << "\n";
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