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
	int n;
	while(1){
	
		cin>>n;
		if(n==0)
		break;
		string s;
		cin>>s;
		int len=s.length();
		int l=len/n;
		char a[l][n];
		
		int k=0;
		for(int j=0;j<l;j++){
			if(j%2!=0){
				for(int i=n-1;i>=0;i--)
				a[j][i]=s[k++];
			}
				else{
				for(int i=0;i<n;i++)
				a[j][i]=s[k++];
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<l;j++)
			cout<<a[j][i];
		}
		cout<<endl;
	}
	return 0;
}

