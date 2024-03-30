#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		ll a[n];
		ll b[n];
		for(int i=0; i<n; i++){
			int tmp;
			cin >>tmp;
			a[i]=tmp;
			b[i]=tmp;
		}
		
		sort(a,a+n);
		auto it=find(b,b+n,a[0]);
		cout <<(int)(it-b) <<endl;
	}
}
