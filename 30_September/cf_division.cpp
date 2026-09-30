#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    if(n <= 1399){
        cout << "Division 4\n";
    }else if(n <= 1599){
        cout << "Division 3\n";
    }else if(n <= 1899){
        cout << "Division 2\n";
    }else{
        cout << "Division 1\n";
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