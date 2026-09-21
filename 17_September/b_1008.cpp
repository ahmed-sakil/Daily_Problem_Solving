#include<bits/stdc++.h>
using namespace std;

int main(){

    int number, wh;
    double ph;

    cin >> number >> wh;
    cin >> ph;

    cout << "NUMBER = " << number << endl;
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << wh*ph << endl;


    return 0;
}