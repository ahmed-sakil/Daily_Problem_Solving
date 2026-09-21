#include<bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;

    int y = x/365;
    x %= 365;

    int m = x/30;
    x %= 30;

    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << x << " dia(s)" << endl;

    return 0;
}