#include<bits/stdc++.h>
using namespace std;


int main(){

    int n;
    cin >> n;

    int arr[n], c=0;

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

        if(arr[i]==1)
        {
            c++;
        }
    }

    if(c)
    {
        cout << "HARD\n";
    }
    else{
        cout << "EASY\n";
    }

    return 0;
}