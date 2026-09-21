#include<bits/stdc++.h>
using namespace std;


int main(){

    string str;
    cin >> str;

    int x = str.length(), low = 0, up = 0;

    for(int i = 0; i<x; i++)
    {
        if(str[i] >= 'a')
            low++;
    }

    up = x - low;

    if(up > low)
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }

    cout << str << endl;

    return 0;
}