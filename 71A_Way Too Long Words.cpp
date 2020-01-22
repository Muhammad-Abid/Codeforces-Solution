#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s[102];
    int i, n;
    cin >> n;
    for( i = 0; i < n; i++ )
    {
        cin >> s[i];
        s[i] = tolower(s[i]);
    }
    for( i = 0; i < n; i++)
    {
        if( s[i].size() > 11 )
        {
            int x = s[i].size();
            cout << s[i][0] << s[i].size()-2 << s[i][x-1] << endl;
        }
        else
        {
            cout << s[i] << endl;
        }
    }

}
