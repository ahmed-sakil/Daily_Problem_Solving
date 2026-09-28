#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> dragons;

    for(int i =0; i<n; i++)
    {
        int x, y;
        cin >> x >> y;
        dragons.push_back({x, y});
    }

    sort(dragons.begin(), dragons.end());

    for(auto [strength, bonus] : dragons)
    {
        if(s>strength){
            s += bonus;
        }else{
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
    //cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}