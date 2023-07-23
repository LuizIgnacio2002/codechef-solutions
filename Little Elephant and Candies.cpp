#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
typedef pair<ld, ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
int main()
{
    int tz;
    cin >> tz;
    for (int t = 0; t < tz; t++)
    {
        ll nelef, ncandies;
        cin >> nelef >> ncandies;
        vl cr(nelef, 0); 
        ll total = 0;
        for (ll i = 0; i < nelef; i++)
        {
            cin >> cr[i];
            total += cr[i];
        }
        if (ncandies >= total)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
