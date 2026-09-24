#include <bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{

    int n;
    cin >> n;

    vector<int> me, ind;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        me.push_back(i+1);
        ind.push_back(x-1);
    }

    for(int i =0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(ind[j]==i){
                cout << me[j] << " ";
                break;
            }
        }
    }
    cout << "\n";
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    // cin >> test_cases;

    while (test_cases--)
    {
        solved_by_sakil();
    }

    return 0;
}