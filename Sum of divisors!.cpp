/*Author-:Palak*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool prime[1000001];
//sieve of Eratosthenes
void sieveofErantosthenes(){
	memset(prime,true,sizeof(prime));
	for(int p=2;p*p<=1000005;p++){
		if(prime[p]){
			for(int i=p*p;i<=1000005;i+=p)
			prime[i]=false;
		}
	}
	//prime[i]=true->number is prime
	//prime[i]=false->number is not prime
	//precompute so that queries can be answered in o(1) time complexity!!
}

bool checkperfectSquare(int n){
	if(ceil((double)sqrt(n))== floor((double)sqrt(n)))
	return true;
	else
	return false;
}
int main()
{
	sieveofErantosthenes();
	//All prime numbers except 2 are odd
	//All numbers which have odd number of divisors are perfect squares
	//factors always occurs in pair
	//if the number is a perfect square then it has odd factors always
	//as one factor is repeated in every case
	bool c[1000005];
	memset(c,false,sizeof(c));
	
	for(int i=2;i<=1000001;i++){
		if(checkperfectSquare(i))
	c[i]=true;
		//cout<<i<<" "<<endl;
	}
	
	int res[1000005];
	res[0]=0;
	int cnt=0;
/*	for(int i=1;i<=1000001;i++){
	if(c[i]==true){
		int sum=0;
		for(int j=1;j<=sqrt(i);j++){
				if(i%j==0)
					if(i/j==j)
					sum+=j;
				else
					sum=sum+j+(i/j);
		
		}
	//cout<<i<<" ";
		if(prime[sum])
		cnt++;	
	}
	res[i]=cnt;
}*/
	
	ll t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		int reso=res[b]-res[a];
		cout<<reso<<endl;
}
return 0;
}
