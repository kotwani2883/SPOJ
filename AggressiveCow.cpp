#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll solve(ll a[],ll n,ll c){
	ll low=0,high=a[n-1],left=0,cnt=0,best=0,mid=0;
	while(low<=high){
		mid=(low+high+1)/2;
		cnt=1,left=0;
		for(ll i=1;i<n&&cnt<=c;i++){
			if(a[i]-a[left]>=mid){
			
			left=i;cnt++;
		}
		}
		if(cnt>=c){
			low=mid+1;
			best=mid;
		}
		else
		high=mid-1;
	}
	return best;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,c;
		cin>>n>>c;
		ll a[n];
		for(ll i=0;i<n;i++)cin>>a[i];
		sort(a,a+n);
		ll res=solve(a,n,c);
		cout<<res<<endl;
	}
	return 0;
}
