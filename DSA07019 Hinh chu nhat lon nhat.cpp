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
		ll a[n];
		for(int i=0; i<n; i++)
			cin >>a[i];
		ll i=0;
		stack <ll> s;
		ll res=INT_MIN;
		while(i<n){
			// Neu stack rong va cot dang xet van lon hon cot tai dinh stack
			if(s.empty() || a[i] >=a[s.top()]){
				s.push(i);
				i++;
			}
			else{
				// Neu tim thay cot nho hon, tuc da tim thay can phai cua cot o dinh stack
				ll ind=s.top(); s.pop();
				if(s.empty()){
					ll r=i;// Can phai bang i
					ll s=a[ind]*i;
					res=max(res, s);
				}
				else{
					ll r=i;
					ll l=s.top();
					ll s=a[ind]*(r-l-1);
					res=max(res, (ll)s);
				}
			}
		}		
		while(!s.empty()){
			ll ind=s.top(); s.pop();
			if(s.empty())
				res=max(res, n*a[ind]);
			else{
				res=max(res, a[ind]*(n-s.top()-1));
			}
		}
		cout <<res <<endl;
	}
}
