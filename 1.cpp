#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
	cin>>a[i];
	ll q;
	cin>>q;
	while(q--)
	{
		ll i{0},j{0},sum{0};
		cin>>i>>j;
		for(ll k=i;k<=j;k++)
		sum+=a[k];
		cout<<sum<<endl;
	}
	return 0;
}
