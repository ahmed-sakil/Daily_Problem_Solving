#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i =0; i <n; i++)
    {

        cin >> a[i];
    }


    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0 && (i == 0 || a[i - 1] == 0))
        {
            c++;
        }

    }


    cout << min(2, c) << '\n';
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