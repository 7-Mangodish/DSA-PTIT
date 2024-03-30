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
		int a[n];
		int inc[n], dec[n];
		for(int i=0; i<n; i++){
			cin >>a[i];
			inc[i]=a[i];
			dec[i]=a[i];
		}
		for(int i=0; i<n; i++){
			for(int j=0; j<i; j++){
				if(a[i] >a[j]){
					inc[i]=max(inc[i], inc[j]+a[i]);
				}
			}
		}	
		for(int i=n-1; i>=0; i--){
			for(int j=n-1; j>i; j--){
				if(a[i]>a[j]){
					dec[i]=max(dec[i], dec[j]+a[i]);
				}
			}
		}
		int f[n];
		for(int i=0; i<n; i++){
			f[i]=inc[i] +dec[i]-a[i];
		}
		cout <<*max_element(f, f+n) <<endl;
	}
}
