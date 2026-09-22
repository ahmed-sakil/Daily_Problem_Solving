#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, i;
    cin >> n;

    for(i=n+1; i; i++)
    {
        int j = i;
        int a, b, c, d;
        d = j%10;
        j = j/10;
        c = j%10;
        j = j/10;
        b = j%10;
        j = j/10;
        a = j;

        if(a==b || a==c || a==d || b==c || b==d || c==d)
        {
            continue;
        }
        else{
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}