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
void computeLPSArray(string a, int M, int lps[])
{
    // length of the previous longest prefix suffix
    int len = 0;
  
    lps[0] = 0; // lps[0] is always 0
  
    // the loop calculates lps[i] for i = 1 to M-1
    int i = 1;
    while (i < M) {
        if (a[i] == a[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else // (pat[i] != pat[len])
        {
            // This is tricky. Consider the example.
            // AAACAAAA and i = 7. The idea is similar
            // to search step.
            if (len != 0) {
                len = lps[len - 1];
  
                // Also, note that we do not increment
                // i here
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
int main()
{
	ll t;
	cin>>t;
	while(t--){
	string b,a;
	cin>>b>>a;
	int n=b.length(),m=a.length();
	
		if(m>n){
		cout<<"Not Found"<<endl;
		continue;
	}
		int lps[m];
		computeLPSArray(a,m,lps);
		/*for(int i=0;i<lps.size();i++)
		cout<<lps[i]<<" ";*/
		int i=0,j=0;
		int cnt{0};
		vector<int>ans;
		while(i<n){
			if(a[j]==b[i])
			i++,j++;
			if(j==m){
				cnt++;
				ans.push_back(i-j+1);
				j=lps[j-1];
			}
			else if(i<n && a[j]!=b[i]){
				if(j==0)
				i++;
				else
				j=lps[j-1];
			}
		}
		if(ans.size()==0)
		cout<<"Not Found"<<endl;
		else{
			cout<<cnt<<endl;
			for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
			cout<<endl;
		}	
	}
	return 0;
}

