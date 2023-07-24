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
        int n, k; cin>>n>>k;
        int tt=0;
        for(int i=0; i<n; i++)
        {
            int w; cin>>w;
            w += k;
            if(w%7==0) tt++;
        }
        cout<<tt<<endl;
        
    }
    return 0;
}
