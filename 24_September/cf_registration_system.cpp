#include<bits/stdc++.h>
using namespace std;

void solved_by_sakil()
{
    int n;
    cin >> n;

    vector<string> name;
    vector<int> count;

    for(int i = 0; i < n; i++)
    {
        string str;
        cin >> str;

        int c = 0;

        for(int j = 0; j < name.size(); j++)
        {
            if(str == name[j])
            {
                count[j]++;
                c++;

                cout << str << count[j] << "\n";
                break;
            }
        }

        if(c == 0)
        {
            cout << "OK\n";
            name.push_back(str);
            count.push_back(0);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solved_by_sakil();

    return 0;
}