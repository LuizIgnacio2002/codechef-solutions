#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
int main()
{
	int tz; cin>>tz;
	for(int t=0; t<tz; t++)
	{
		int n, k; cin>>n>>k;
		int rpta = 0;
		priority_queue<int> pqdesc;
		priority_queue<int, vector<int>, greater<int>> pqascen;
		
		while(n--)
		{
			int w; cin>>w;
			pqdesc.push(w);
			pqascen.push(w);
		}
		
		int aux=k;
		int child=0, cheff=0;
		while(aux--)
		{
			cheff += pqdesc.top();
			pqdesc.pop();
		}
		while(!pqdesc.empty())
		{
			child += pqdesc.top();
			pqdesc.pop();
		}
		rpta = abs(cheff - child);
		aux = k;
		child=0, cheff=0;
		while(aux--)
		{
			child += pqascen.top();
			pqascen.pop();
		}
		while(!pqascen.empty())
		{
			cheff += pqascen.top();
			pqascen.pop();
		}
		rpta = max( rpta, abs(cheff- child));
		cout<<rpta<<endl;
	}
	return 0;
}
