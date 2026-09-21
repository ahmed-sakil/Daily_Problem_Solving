#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    getline(cin, str);

    // transform(str.begin(), str.end(), str.begin(), ::tolower);
    str[0] = toupper(str[0]);

    cout << str << endl;

    return 0;
}