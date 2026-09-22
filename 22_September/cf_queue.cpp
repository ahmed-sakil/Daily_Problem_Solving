#include<bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;

    cin >> n >> x;

    string str;
    cin >> str;

    while(x--)
    {
        for(int i =0; i<str.length()-1; i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                // cout << "flag\n";
                swap(str[i], str[i+1]);
                i++;
            }
        }
    }

    cout << str << "\n";
    
    return 0;
}