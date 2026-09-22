#include<bits/stdc++.h>
using namespace std;

int main(){

    long long t;
    cin >> t;

    while(t--){
        long long n, i;
        cin >> n;
        string s;
        cin >> s;

        if(s[0]=='1'){
            long long c = 0;
            for(i=1; i<s.length(); i++)
            {
                if(s[i]=='0')
                {
                    c++;
                }
            }
            cout << c << "\n";
            continue;;
        }
        else{

            long long st = -1;
            for(i=0; i<n; i++)
            {
                if(s[i]=='1')
                {
                    st = i;
                    break;
                }
            }
            if(st == -1)
            {
                cout << 0 << "\n";
                continue;
            }

            long long zero = 0;
            for(i = st; i<n; i++)
            {
                if(s[i]=='0')
                {
                    zero++;
                }
            }

            long long one = 0;
            long long ans = zero;

            for(i=st; i<n; i++)
            {
                if(s[i] == '1')
                {
                    one++;
                }
                else{
                    zero--;
                }
                ans = min(ans, one+zero);
            }

            cout << ans << "\n";


            

        }
    }

    return 0;
}