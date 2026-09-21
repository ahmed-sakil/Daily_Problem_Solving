#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    double salary, sales;
    cin >> salary >> sales;
    salary += (sales/100.00)*15.00;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary << endl;

    return 0;
}