                                                    /*بسم الله الرحمن الرحي*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, t, ar[3];

    cin >> t;

    while(t--)
    {
        cin >> ar[0] >> ar[1] >> ar[2] >> n;

        if( ar[0] == ar[1] && ar[1] == ar[2])
        {
            if( n%3 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        
        else
        {
            int f = 0;

            sort( ar, ar+3, greater<int>() );

            f += ar[0]-ar[1];
            f += ar[0]-ar[2];

            n -= f;

            if( n < 0 )
                cout << "NO" << endl;
            else if( n == 0 )
                cout << "YES" << endl;
            else
            {
                if( n%3 == 0 )
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
            }
        }
    }
    return 0;
}

