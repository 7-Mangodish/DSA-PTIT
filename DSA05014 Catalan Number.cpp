#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
ll f[101];
void catalan(){
	f[0]=1;
	for(int i=1; i<=100; i++){
		ll res=0;
		for(int j=0; j<i; j++){
			ll tmp=f[j]*f[i-j-1];
			res+=tmp;
		}
		f[i]=res;
	}
}
int main(){
	int t;
	cin >>t;
	catalan();
	while(t--){
		int n;
		cin >>n;
		cout <<f[n] <<endl;
	}
}
