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
        ll x, y, k, n;
        cin>>x>>y>>k>>n;
        bool f=false;
        for(int i=0; i<n; i++)
        {
            ll pages, cost;
            cin>>pages>>cost;
            if((x-y<=pages) && k>=cost)
            {
                f=true; 
            }
        }
        if(f) cout<<"LuckyChef";
        else cout<<"UnluckyChef";
        cout<<endl;
    }
    return 0;
}
