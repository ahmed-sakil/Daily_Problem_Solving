#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    vector<string> grid(8);


    for (int i = 0; i < 8; i++)
    {
        cin >> grid[i];

    }


    for (int i = 0; i < 8; i++)
    {

        if (grid[i] =="RRRRRRRR")
        {
            cout << "R\n";
            return;
        }


    }
    
    cout << "B\n";

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