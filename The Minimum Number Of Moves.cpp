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
        vi v;
        int n; cin>>n;
        int total = 0;
        for(int i=0; i<n; i++)
        {
            int w; cin>>w;
            v.push_back(w);
        }
        sort(v.begin(),v.end());
        int mmmm = v[0];
        if(v[0]==v[n-1]) total=0;
        else
        {
            for(int i=1; i<n; i++)
            {
            	int a = v[i];
                while(a>v[0]) 
                {
                	total++;
                	a--;
				}
            }
        }
        cout<<total<<endl;
    }
    return 0;
}
