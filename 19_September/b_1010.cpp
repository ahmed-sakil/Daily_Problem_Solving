#include<bits/stdc++.h>
using namespace std;


int main(){

    int a, b, x, y;
    double c, z;
    cin >> a >> b;
    cin >> c;
    cin >> x >> y;
    cin >> z;

    c = b * c;
    z = y * z;
    z = c + z;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << z << endl;

    return 0;
}