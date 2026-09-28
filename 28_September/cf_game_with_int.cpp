#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    if((n+1)%3==0 || (n-1)%3==0)
    {
        cout << "First\n";
    }else{
        cout << "Second\n";
    }
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