#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr;

    while(n--)
    {
        int x;
        cin >> x;

        arr.push_back(x);
    }

    sort(arr.begin(), arr.end());

    for(int i:arr)
    {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}