#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int opc(vector<int> prices, int p)
{
    int rpta=0;
    for(int i=11; i>=0; i--)
    {
    	
        while(p>=prices[i]) 
        {
            rpta++;
            p -= prices[i];
            //cout<<"precios: "<<prices[i]<<" "<<endl;
        }
    }
    return rpta;
}

int main() {
	// your code goes here
	int t; cin>>t;
	
	vector<int> prices={1, 2, 4, 8, 16,
	    32, 64, 128, 256, 512, 1024, 2048};
	    
	for(int i=0; i<t; i++)
	{   
	 
	    int p; cin>>p;
	    int cantMenu = opc(prices, p);
	    cout<<cantMenu<<endl;
	}
	
	
	
	return 0;
}
