#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{


    int a[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            cin >> a[i][j];
        }
    }

    int d_x[] = {0, 0, 0, -1, 1};
    int d_y[] = {0, -1, 1, 0, 0};

    for(int i = 0; i < 3; i++){


        for(int j = 0; j < 3; j++){
            int cnt = 1;


            for(int k = 0; k < 5; k++){
                int x = i + d_x[k];
                int y = j + d_y[k];

                if(x >= 0 && x < 3 && y >= 0 && y < 3){
                    cnt += a[x][y];
                }

            }

            cout << (cnt % 2);
        }
        
        cout << '\n';
    }

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