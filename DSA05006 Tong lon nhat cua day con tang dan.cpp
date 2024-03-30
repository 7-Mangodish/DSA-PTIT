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
		int a[n], f[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
			f[i]=a[i];			
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				if(a[i]>a[j]){
					f[i]=max(f[i], f[j]+a[i]);
				}
			}
		}
		cout <<*max_element(f, f+n);
		cout <<endl;
	}
}	
