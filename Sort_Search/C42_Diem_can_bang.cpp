#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int chk( int f[], int n){
	for(int i=1; i<n-1; i++){
		int suml= f[i-1],
		sumr= f[n-1] - f[i];
		if(suml==sumr)
			return i+1;
	}
		return -1;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int i=0; i<n; i++)
			cin >>a[i];
		int f[n];
		for(int i=0; i<n; i++){
			if(i==0)
				f[i]=a[i];
			else
				f[i]=f[i-1]+a[i];
		}
		cout <<chk(f,n) <<endl;			
	}
}
