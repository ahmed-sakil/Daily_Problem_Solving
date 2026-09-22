#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, h;
    cin >> n >> h;

    int arr[n], i, c=0;

    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]>h)
        {
            c++;
        }
    }

    cout << (n-c)+(c*2) << endl;

    return 0;
}