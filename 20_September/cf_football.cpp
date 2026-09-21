#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    int x = str.length();

    int c = 1;

    for(int i = 1; i<x; i++)
    {
        if(str[i]==str[i-1])
        {
            c++;
        }
        else{
            c=1;
        }

        if(c==7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}