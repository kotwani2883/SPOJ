/*Author-:Palak*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime[4390850];
//sieve of Eratosthenes
void sieveofErantosthenes(){
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=4390850;p++){
		if(prime[p]){
			for(int i=p*p;i<=4390850;i+=p)
			prime[i]=false;
		}
	}
}

int main()
{
	sieveofErantosthenes();
	bool v[1000005]; 
	memset(v, false, sizeof(v));
    ll maxn = 0;
    cout<<"krgre";
    for(ll i=1; i<=1000000; i++)
    {
        ll sum=0;
        for(ll j=1; j<=sqrt(i); j++)
        {
            if(i%j==0) { sum += j; if(j != i/j ) sum += i/j; } 
        }
        if(prime[sum]) v[i] = true;
    }
	vector<int>res;
	for(int i=2;i<=1000001;i++){
		if(ceil((double)sqrt(i))== floor((double)sqrt(i))||i==2)
	   res.push_back(i);
		//cout<<i<<" "<<endl;
	}
int ans[1000005]={0};
    
    for(int i=1, j=0; i<=1000000; i++)
    {
        if(res[j] == i) ans[i] = ans[i-1]+1, j++ ;
        else ans[i] = ans[i-1]; 
    }
    
	
	ll t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int reso=res[b]-res[a-1];
		cout<<reso<<endl;
}
return 0;
}
