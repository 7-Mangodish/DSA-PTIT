#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

ll sum, ans;
ll n,s;
ll a[35];
bool used[35];
vector <ll> v;

void ktao(){
	cin >>n >>s;
	for(int i=1; i<=n; i++)
		cin >>a[i];
	sort(a+1, a+n+1);
	memset(used, false, sizeof used);
	v.clear();
	sum=0;	
	ans=mod;
}

void Try(int k){
	for(int i=k+1; i<=n; i++){
		if(!used[i]){
			used[i]=true;
			v.push_back(a[i]);
			sum+=a[i];
			if(sum <s){
				Try(i);
			}
			else{
				if(sum==s){
					ans=min(ans, (ll)v.size());
				}
				else{
					used[i]=false;
					v.pop_back();
					sum-=a[i];
					break;
				}
			}
			used[i]=false;
			v.pop_back();
			sum-=a[i];			
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		Try(0);
		if(ans==mod)
			cout <<-1;
		else
			cout <<ans;
		cout <<endl;
	}
}
