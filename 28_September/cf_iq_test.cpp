#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;


    int e_ind, o_ind, e=0;
    for(int i =0; i<n; i++)
    {
        int x;
        cin >> x;

        if(x%2==0){
            e_ind = i;
            e++;
        }else{
            o_ind = i;
        }
    }

    if(e==1){
        cout << e_ind+1 << "\n";
    }else{
        cout << o_ind+1 << "\n";
    }
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
