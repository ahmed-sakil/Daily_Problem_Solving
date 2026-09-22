#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int i = n;


    vector<int> arr;
    int total=0;
    while(n--){
        int x;
        cin >> x;
        arr.push_back(x);
        total += x;
    }
    sort(arr.begin(), arr.end());

    int m=0, c=0;
    while(i--){
        m += arr[i];
        c++;
        if(m>(total-m))
            break;
    }

    cout << c << "\n";

    return 0;
}