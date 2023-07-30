#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
	// your code goes here
	ll n, d; cin>>n>>d;
	vector<ll> v;
	ll tt=0;
	for(int i=0; i<n; i++)
	{
	    ll a; cin>>a;
	    v.push_back(a);
	}
	
	sort(v.begin(),v.end());
	
	for(int i=0; i<n-1; i++)
	{
	    if(v[i+1]-v[i]<=d)
	    {
	        tt++;
	        i++;
	    }
	}
	cout<<tt;
	
	return 0;
}
