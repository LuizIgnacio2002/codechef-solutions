#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;

int maxdiff(vector<int> v, int k)
{
	int child=0;
	int cheff=0;
	int i=0;
	while(k>0)
	{
		child += v[i];
		i++;
		k--;
	}
	
	for(int j=i; j<v.size(); j++)
	{
		cheff += v[j];
	}
	return abs(cheff-child);
}

int maxdiff2(vector<int> v, int k)
{
	int child=0;
	int cheff=0;
	int i=v.size()-1;
	while(k>0)
	{
		child += v[i];
		i--;
		k--;
	}
	
	for(int j=i; j>=0; j--)
	{
		cheff += v[j];
	}
	return abs(cheff-child);
}

int main()
{
	int tz; cin>>tz;
	for(int t=0; t<tz; t++)
	{
		int rpta = 0;
		int n, k; cin>>n>>k;
		vector<int> weighs;
		for(int i=0; i<n; i++)
		{
			int w; cin>>w;
			weighs.push_back(w);
		}
		
		sort(weighs.begin(), weighs.end());
		
		rpta=max(maxdiff(weighs, k), maxdiff2(weighs, k));
		cout<<rpta<<endl;
		
	}
	
	return 0;
}
