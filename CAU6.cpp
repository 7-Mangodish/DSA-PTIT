#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,s,k;
		cin >>n >>s >>k;
		int a[n+1];
		for(int i=1; i<=n; i++){
			cin >>a[i];
		}
		int f[n+1];
		f[0]=0;
		for(int i=1; i<=n; i++){
			if(i==1)
				f[i]=a[i];
			else
				f[i]=f[i-1]+a[i];
		}
		
		bool ok=false;
		for(int i=0; i<s; i++){
			if(f[s]-f[i]<=k){
				ok=true;
				cout <<i+1;
				break;
			}
		}
		if(!ok)
			cout <<-1;
		cout <<endl;
	}
}
