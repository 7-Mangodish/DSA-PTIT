#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,k;
int x[20]={0}, a[20];

void Try(int i){
	for(int j=i; j<=n-k+i; j++){
		if(j>x[i-1]){
			x[i]=j;
			if(i==k){
				for(int i=1; i<=k ;i++)
					cout <<a[x[i]] <<" ";
				cout <<endl;
			}
			else
				Try(i+1);
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		for(int i=1; i<=n; i++){
			cin >>a[i];
		}
		sort(a+1, a+n+1);
		Try(1);
	}	
}
