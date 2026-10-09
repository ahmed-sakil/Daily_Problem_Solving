#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    long long n, k;
    cin >> n >> k;

    vector<int> a;
    int i;
    for(i=0; i<n; i++)
    {
        int x;
        cin >> x;

        a.push_back(x);
    }

    sort(a.begin(), a.end());

    int max_length = 1;
    int current_length = 1;
    for (int i =1; i <n; i++)
    {
         
        if (a[i] - a[i - 1] <= k)
        {
            current_length++;
        }
        else
        {
            current_length = 1;
        }
        
        max_length = max(max_length, current_length);
    }


    cout << n - max_length << '\n';


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