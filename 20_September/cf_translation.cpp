#include<bits/stdc++.h>
using namespace std;

int main(){

    string str, str1;
    cin >> str >> str1;

    int x = str.length();

    if(str.length() != str1.length())
    {
        cout << "NO" << endl;
        return 0;
    }

    for(int i=0; i<x; i++)
    {
        if(str[i] != str1[x-i-1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}