#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int c = 1;
    for(int i =0; i< s.length(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(!c){
                cout << " ";
                c++;
            }
            i+=2;
        }
        else{
            cout << s[i];
            c=0;
        }
    }
    cout << "\n";

    return 0;
}