#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    // cin.ignore();
    getline(cin, str);

    transform(str.begin(), str.end(), str.begin(), ::tolower);

    for(int i =0; i<str.length(); i++)
    {
        char c = str[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
        {
            continue;
        }
        else{
            cout << "." << c;
        }
    }
    cout << endl;


    return 0;
}