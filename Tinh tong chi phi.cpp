#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int n,k;
	cin >>n >>k;
	priority_queue<ll, vector<ll>, greater<ll>> q;
	for(int i=0; i<n; i++){
		ll tmp;
		cin >>tmp;
		q.push(tmp);
	}
	ll ans=0;
	while(q.size()>1){
		ll s=0;
		ll Mx=0, Mn=LONG_LONG_MAX;
		if(q.size()>=k){
			for(int i=0; i<k; i++){
				ll t=q.top(); q.pop();
				s+=t;
				Mx=max(Mn, t);
				Mn=min(Mn, t);
			}
		}
		else{
			while(!q.empty()){
				ll t=q.top(); q.pop();
				s+=t;
				Mx=max(Mn, t);
				Mn=min(Mn, t);				
			}
		}
		q.push(s);
		ans+=Mx-Mn;
	}
	cout <<q.top() <<endl <<ans;
}
