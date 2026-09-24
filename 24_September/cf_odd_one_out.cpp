#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil(){
   int a, b, c;
   cin >> a >> b >> c;
   if(b==c){
    cout << a;
   }else if(a==c){
    cout << b;
   }else{
    cout << c;
   }
   cout << "\n";

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long test_cases = 1;
    cin >> test_cases;

    while(test_cases--){
        solved_by_sakil();
    }

    return 0;
}