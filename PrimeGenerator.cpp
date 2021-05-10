#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> primes;
int prime[100001];
 
void sieve(int maxLimit)
{
	vector<int>arr(maxLimit + 1 , 0);
	arr[1] = 1;
 
	for(int i=2;i<=maxLimit;i++)
	if(arr[i] == 0)
	{
		for(int j=2*i;j<=maxLimit;j+=i)
		arr[j] = 1;
	}
 
for(int i=1;i<=maxLimit;i++)
	if(arr[i] == 0)
	primes.push_back(i);
}
 
void segmented(int left , int right)
{
	if(left == 1) 
	left++;
 
	int maxLimit = right -left + 1;
	vector<int> arr(maxLimit , 0);
 
	for(ll p : primes)
	if(p*p <= right)
	{
		int i = (left / p) * p;
		if(i < left) i += p;
 
		for(;i<=right;i+=p)
		{
			if(i != p)
			arr[i-left] = 1;
		}
	}
 
	for(int i=0;i<maxLimit;i++)
	if(arr[i] == 0)
	cout<<left + i<<endl;
}
 
int main()
{
	sieve(100000);
	int t , L , R;
	cin>>t;
 
	while(t--)
	{
		cin>>L>>R;
		segmented(L , R);
		cout<<endl;
	}
}

