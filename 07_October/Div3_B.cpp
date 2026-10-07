#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;


    string s;
    cin >> s;

    vector<bool> done(n + 1, false);
    vector<int> memory;

    for (int i = 1; i <= n; i++)
    {
        char c = s[i - 1];
        if (c == '1')
        {
            memory.push_back(i);
        }
        else if (c == '2')
        {
            if (!memory.empty())
            {
                done[memory.back()] = true;
                memory.pop_back();
            }
            else
            {
                done[i] = true;
            }
        }
        else if (c == '3')
        {

            done[i] = true;
        }
    }


    vector<int> nt_done;
    for (int i =1; i <=n; i++){
        if (!done[i])
        {
            nt_done.push_back(i);
        }
        
    }

    cout << nt_done.size() << '\n';
    for (int i =0; i <(int)nt_done.size(); i++)
    {

        cout << nt_done[i] << (i + 1 == (int)nt_done.size() ? "" : " ");
    }
    cout << '\n';
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