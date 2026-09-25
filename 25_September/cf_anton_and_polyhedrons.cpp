#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    int c =0;
    while(n--)
    {
        string s;
        cin >> s;
        if(s=="Tetrahedron"){
            c+=4;
        }else if(s=="Cube"){
            c+=6;
        }else if(s=="Octahedron"){
            c+=8;
        }else if(s=="Dodecahedron"){
            c+=12;
        }else{
            c+=20;
        }
    }
    cout << c << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    //cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}