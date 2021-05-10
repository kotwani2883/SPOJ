#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int findTrailingZeroes(int n){
	int cnt=0;
	for(int i=5;n/i>=1;i=i*5)
	cnt+=(n/i);
	return cnt;
}
int main()
{
	ll t;
	cin>>t;
	while(t--){
    ll n;
    cin>>n;
    int  ans=findTrailingZeroes(n);
    cout<<ans<<endl;
}
    return 0;
}
    
