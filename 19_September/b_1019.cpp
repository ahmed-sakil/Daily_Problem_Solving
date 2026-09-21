#include<bits/stdc++.h>
using namespace std;

int main(){

    int s;
    cin >> s;
    int h = s/3600;
    s %= 3600;

    int m = s/60;
    s %= 60;

    cout << h << ":" << m << ":" << s << endl;

    return 0;
}