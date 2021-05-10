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
	while(1){
		ll n;
		cin>>n;
		if(n==-1)
		break;
		ll sum{0};
		ll a[n];
	for(ll i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%n!=0)
	cout<<"-1"<<endl;
	else
	{
		ll res=0;
		ll d=sum/n;
		for(ll i=0;i<n;i++){
			if(a[i]>d)
			res+=(a[i]-d);
		}
		cout<<res<<endl;
	}
	}
	return 0;
}

