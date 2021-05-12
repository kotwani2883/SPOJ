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
bool checkPalindrome(string s){
	int i=0,j=s.length()-1;
	while(i<j){
		if(s[i]==s[j]){
		i++;j--;
		continue;
	}
		else
		return false;
	}
	return true;
}
int main()
{
	ll t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<char>c;
		
		for(int i=0;i<s.length()-1;i++){
			if(s[i]==s[i+1])
			continue;
			else
			c.push_back(s[i]);
		}
		c.push_back(s[s.length()-1]);
		string res="";
		for(int i=0;i<c.size();i++)
		res+=c[i];
		//cout<<res<<endl;
		if(checkPalindrome(res))
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}

