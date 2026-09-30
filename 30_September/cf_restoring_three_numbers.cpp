#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    sort(arr, arr+4);

    int x = arr[3], a = arr[0], b = arr[1], c = arr[2];

    cout << x-c << " " << x-b << " " << x-a << "\n";
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