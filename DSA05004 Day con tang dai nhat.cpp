#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n+1],f[n+1];
	for(int i=1; i<=n; i++)
		cin >>a[i];
	fill(f,f+n+1,1);
	for(int i=1; i<=n; i++){
		for(int j=1; j<i; j++){
			if(a[i] > a[j])
				f[i]=max(f[i],1+f[j]);
		}
	}
	cout <<*max_element(f+1, f+n+1);
}
