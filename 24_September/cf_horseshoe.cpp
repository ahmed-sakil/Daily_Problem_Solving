#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil(){
   
    set<int> arr;

    int n=4;
    while(n--)
    {
        int x;
        cin >> x;
        arr.insert(x);
    }
   cout << 4-arr.size() << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    // cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}