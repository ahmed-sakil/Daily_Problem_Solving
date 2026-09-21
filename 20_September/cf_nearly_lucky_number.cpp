#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int x;

    cin >> x;

    int lucky = 0;

    while(x){
        int n = x%10;
        if(n==4 || n==7){
            lucky ++;
        }
        x = x/10;
    }

    if(lucky==4 || lucky==7)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}