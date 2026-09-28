#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    map<string, int> score;
    while(n--)
    {
        string s;
        cin >> s;
        score[s]++;
    }

    int maxgoal=0;
    string t;
    for(auto [team, goal]: score)
    {
        if(goal > maxgoal){
            t = team;
            maxgoal = goal;
        }
    }
    cout << t << "\n";
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
