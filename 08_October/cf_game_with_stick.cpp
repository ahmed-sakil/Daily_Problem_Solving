#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n, m;
    cin >> n >> m;


    int c = min(n, m);
    if (c % 2 == 1)
    {
        cout << "Akshat\n";
    }
    else
    {
        cout << "Malvika\n";
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