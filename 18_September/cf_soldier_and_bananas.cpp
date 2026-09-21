#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, n, w;
    cin >> k >> n >> w;

    long long cost = k * w * (w + 1) / 2;

    long long borrow = max(0LL, cost - n);

    cout << borrow << endl;

    return 0;
}