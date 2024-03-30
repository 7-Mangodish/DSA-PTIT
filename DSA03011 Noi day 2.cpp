#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		priority_queue<ll, vector<ll>, greater<ll>> q;
		for(int i=0; i<n; i++){
			ll tmp;
			cin >>tmp;
			q.push(tmp);
		}
//		cout <<q.top();
		ll sum=0;
		while( q.size()!=1){
			ll t1=q.top()%mod; q.pop();
			ll t2=q.top()%mod; q.pop();
			ll tmp=(t1+t2)%mod;
			sum+=tmp;
			q.push(tmp);
		}
		cout <<sum%mod <<endl;
	}
}
