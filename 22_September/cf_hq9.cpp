#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;

    int c = 0;

    for(char i:str)
    {
        if(i == 'H' || i== 'Q' || i == '9')
        {
            c++;
        }
    }

    if(c)
    {
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}