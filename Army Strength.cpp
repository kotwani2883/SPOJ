/*Author-:Palak*/
/*
 * Only write code when you are sure of the approach .Remember of penalties!!
 * Do optimized thinking (Think which technique/observation can be used,deep drive into the problem!!).
 * Do post analysis after the contest./Upsolving is much more important than giving contest
 * Learn a technique and solve some problems if its new to you--->Solve as many as problems to be confident in those kinds of problem!!
 * DON'T GET STUCK ON ONE APPROACH,Move your mind in all directions
 *Remember who you are and your Capabilities!!
 */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isPrime(ll n)
{
	//Corner case:
	if(n<=1)
	return false;
	if(n<=3)
	return true;

	//This optimizes the complexity:
	if(n%2==0||n%3==0)
	return false;
	for(ll i=5;i*i<=n;i=i+6)
	{
		if(n%i==0||n%(i+2)==0)
		return false;
	}
	return true;
}
int main()
{
	ll t;
	cin>>t;
	while(t--){
		cout<<endl;
		ll ng,nm;
		cin>>ng>>nm;
		ll a[ng],b[nm];
		for(ll i=0;i<ng;i++)
		cin>>a[i];
		for(ll i=0;i<nm;i++)
		cin>>b[i];
		sort(a,a+ng);
		sort(b,b+nm);
		ll i{0},j{0};
		while(i<ng && j<nm){
			if(a[i]<b[j]){
			//cout<<a[i]<<" ";
				i++;
			}
				else{
			//	cout<<b[j]<<" ";
				j++;
			}
			
		}
		if(i==ng)
		cout<<"MechaGodzilla"<<endl;
		else
		cout<<"Godzilla"<<endl;
	}
	return 0;
}

