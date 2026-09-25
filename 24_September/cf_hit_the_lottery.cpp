#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<int> a = {100, 20, 10, 5, 1};

    int c=0;
    for(int i =0; i<5; i++)
    {
        c += n/a[i];
        n = n% a[i];
    }

    cout << c << "\n";
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
